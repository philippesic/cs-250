//
//  main.cpp
//  Week 16 Prog 4
//
//  Created by Pippo Pesic on 11/28/22.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    int amount;
    string name;
    ofstream fout;
    fout.open("/Users/pippo/Desktop/Week 16 Prog 4/savedNames.txt");
    cout << "Enter number of names to input: ";
    cin >> amount;
    
    for (int i = 0; i < amount; i++) {
        cout << "Enter name: ";
        cin >> name;
        fout << name << endl;
    }
    cout << "Philip Pesic 12/5/22" << endl;
    return 0;
}
