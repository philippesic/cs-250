#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <unistd.h>
#include "Board.h"
using namespace std;

class MemoryMatchGame {
    
private:
    
    //Define Board Arrays
    Board board = *new Board();
    int rowGuess1 = -1;
    int columnGuess1 = -1;
    int rowGuess2 = -1;
    int columnGuess2 = -1;

    int difficultyLevel;
    string theme;
    int guessTime;
    
    const int BASE_TIME = 1000000; //In Milliseconds

    string guessedThemeWords[32];
    

public:


    void setTheme() {
        bool isThemeSelected = false;
        
        while (!isThemeSelected){
            cout << "Select theme: Cars, Elements, Fruit: [c,e,f] ";
            cin >> theme;
            cout << endl;
            if (theme == "c" or theme == "e" or theme == "f") {
                isThemeSelected = true;
            }
            else {
                cout << endl << "Invalid theme" << endl;
            }
        }
    }
    
    //Declare board size
    void setDifficultyLevel() {
        cout << "Enter difficulty level (4, 6, 8): ";
        cin >> difficultyLevel;
        if (difficultyLevel != 4 and difficultyLevel != 6 and difficultyLevel != 8) {
            cout << endl << "Invalid difficulty level" << endl;
        }
    }

    //Declare time between guesses in seconds
    void setTimeDelay() {
        cout << endl << "Enter time in seconds between guesses (2, 4, 6): ";
        cin >> guessTime;
        if (guessTime == 2 or guessTime == 4 or guessTime == 6) {
            guessTime = guessTime * BASE_TIME;
        }
        else {
            cout << endl << "Invalid time" << endl;
        }
    }
    
    //Game loop of first and second guess and board reprint
    void gameLoop() {
        int guessedWordsCount = 0;
        int uniqueWordCount = difficultyLevel * difficultyLevel / 2;
        
        while (guessedWordsCount < uniqueWordCount) {
            cout << "Guess 1:" << endl;
            cout << "Enter column (0, 1, 2, 3...) ";
            cin >> columnGuess1;
            cout <<  endl << "Enter row (0, 1, 2, 3...) ";
            cin >> rowGuess1;
            
            // re-print board
            board.printBoard(guessedThemeWords, rowGuess1, columnGuess1, -1, -1);
            
            cout << endl << "Guess 2:" << endl;
            cout << "Enter column (0, 1, 2, 3...) ";
            cin >> columnGuess2;
            cout <<  endl << "Enter row (0, 1, 2, 3...) ";
            cin >> rowGuess2;
            
            //Check guesses with each other and assign to board element
            if (board.isMatch(rowGuess1, columnGuess1, rowGuess2, columnGuess2)){
                guessedThemeWords[guessedWordsCount] = board.getElement(rowGuess1, columnGuess1);
                guessedWordsCount++;
            }
            else {
                board.printBoard(guessedThemeWords, rowGuess1, columnGuess1, rowGuess2, columnGuess2); // print both guesses and delay
                usleep(guessTime);
            }

            // re-print board
            board.printBoard(guessedThemeWords, -1, -1, -1, -1);
        }
    }
    
    //Start procedure and guess loop
    void start() {
        
        setTheme();
        setDifficultyLevel();
        setTimeDelay();
        board.boardSize = difficultyLevel;
        board.theme = theme;
        board.initializeBoard();
        board.printBoard(guessedThemeWords, -1, -1, -1, -1);
        
        gameLoop();
        
        cout << "You won!" << endl;
        cout << "Philip Pesic 12/11/22" << endl;
    }

};
