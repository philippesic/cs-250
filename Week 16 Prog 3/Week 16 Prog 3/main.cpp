//
//  main.cpp
//  Week 16 Prog 3
//
//  Created by Pippo Pesic on 11/28/22.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
    ifstream peopleFile;
    string word;
    string wordsArray[15] = {};
    int counter = 0;
    
    peopleFile.open("/Users/pippo/Desktop/Week 16 Prog 3/firstLastAge.txt");
    
    while(!peopleFile.eof()) {
        peopleFile >> word;
        wordsArray[counter] = word;
        counter++;
     }
    
    int minAge = 1000;
    int maxAge = 0;
    for(int i=2; i<15; i=i+3){
        int currentAge = stoi(wordsArray[i]);
        if (currentAge > maxAge){
            maxAge = currentAge;
        }
        if (currentAge < minAge){
            minAge = currentAge;
        }
    }
    cout << "Max age: " << maxAge << endl;
    cout << "Min age: " << minAge << endl;
    peopleFile.close();
    cout << "Philip Pesic 12/5/22" << endl;
    return 0;
}
