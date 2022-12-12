//
//  main.cpp
//  Week 16 Prog 5
//
//  Created by Pippo Pesic on 11/28/22.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
    ofstream fout;
    fout.open("/Users/pippo/Desktop/Week 16 Prog 5/testScores.txt");
    int tempScore;
    int testScores[10] = {};
    for (int i = 0; i<10; i++) {
        cout << "Enter score: ";
        cin >> tempScore;
        cout << endl;
        testScores[i] = tempScore;
        fout << tempScore << endl;
    }
    fout.close();
    int minScore = 1000;
    int maxScore = 0;
    int avgScore = 0;
    int sumScores = 0;
    for (int i = 0; i<10; i++) {
        if (testScores[i] < minScore) {
            minScore = testScores[i];
        }
        if (testScores[i] > maxScore) {
            maxScore = testScores[i];
        }
        sumScores = sumScores + testScores[i];
    }
    avgScore = (sumScores/10);
    cout << "Lowest score: " << minScore << endl;
    cout << "Highest score: " << maxScore << endl;
    cout << "Average score: " << avgScore << endl;
    cout << "Philip Pesic 12/5/22" << endl;
    return 0;
}
