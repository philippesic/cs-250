//
//  main.cpp
//  Week 16 Prog 2
//
//  Created by Pippo Pesic on 11/28/22.
//


#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
    string aLine;
    ifstream fin;
    fin.open ("/Users/pippo/Desktop/Week 16 Prog 2/firstLastAge.txt");
    
    // Check for error
    if (!fin)
    {
        cerr << "File not found" << endl;
        exit(1);
    }
    
    while (!fin.eof()) {
        getline(fin,aLine);
        cout << aLine << endl;
    }
    fin.close();
    cout << "Philip Pesic 12/5/22" << endl;
    return 0;
}
