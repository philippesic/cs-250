#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <unistd.h>
#include "utils.h"
using namespace std;

class Board {

private:
    
    string boardData[8][8];
    string allThemeWords[50];
    
public:
    
    int boardSize;
    string theme;
    
    
    bool isMatch(int row1, int col1, int row2, int col2) {
        return boardData[row1][col1] == boardData[row2][col2];
    }
    
    string getElement(int row, int col){
        return boardData[row][col];
    }
    
    void loadAllThemeWords() {
        ifstream fin;
        string line;

        if (theme == "c") {
            fin.open("/Users/pippo/github/cs-250/week 17 final project/themes/Cars.txt");
        }
        else if (theme == "e") {
            fin.open("/Users/pippo/github/cs-250/week 17 final project/themes/Atoms.txt");
        }
        else  if (theme == "f") {
            fin.open("/Users/pippo/github/cs-250/week 17 final project/themes/Fruits.txt");
        }
        
        int i = 0;
        while (!fin.eof()) {
            getline(fin, line);
            allThemeWords[i] = line;
            i++;
        }
    }

    
    void printBoard(string guessedThemeWords[], int rowGuess1, int columnGuess1, int rowGuess2, int columnGuess2) {
        int uniqueWordCount = boardSize * boardSize / 2;
        for (int i = 1; i < 100; i++) {
            cout << endl;
        }
        for(int row = 0; row < boardSize; row++){
            for(int column = 0; column < boardSize; column++){
                if (contains(guessedThemeWords, uniqueWordCount, boardData[row][column])){
                    cout << setw(10) << boardData[row][column];
                }
                else if ((row == rowGuess1 && column == columnGuess1) || (row == rowGuess2 && column == columnGuess2)){
                    cout << setw(10) << boardData[row][column];
                }
                else {
                    cout << setw(10) << "X";
                }
            }
            cout << endl;
        }
    }
    
    void initializeBoard() {
        // select random theme words
        int count = 0;
        int uniqueWordCount = boardSize * boardSize / 2;
        string selectedThemeWords[32];
        srand(time(0));
        loadAllThemeWords();
        
        while (count < uniqueWordCount) {
            // pick a random theme word
            int index = rand() % 50;
            if (allThemeWords[index] != "") {
                selectedThemeWords[count] = allThemeWords[index];
                allThemeWords[index] = "";
                count++;
            }
        }
        
        string doubleSelectedThemeWords[64];
        for(int i = 0; i < uniqueWordCount; i++){
            doubleSelectedThemeWords[i] = selectedThemeWords[i];
            doubleSelectedThemeWords[i+uniqueWordCount] = selectedThemeWords[i];
        }
        
        shuffleArrayInPlace(doubleSelectedThemeWords, 16);
        
        // assign words into board
        int i = 0;
        for(int row = 0; row < boardSize; row++) {
            for(int column = 0; column < boardSize; column++){
                boardData[row][column] = doubleSelectedThemeWords[i];
                i++;
            }
        }
    }
};
