//
//  main.cpp
//  Week 16 Prog 6
//
//  Created by Pippo Pesic on 11/28/22.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream fin;
    fin.open("/Users/pippo/Desktop/Week 16 Prog 6/records.txt");
    
    string line;
    string records[10];
    int count = 0;
    
    while (!fin.eof()) {
        getline(fin, line);
        fin >> line;
        records[count] = line;
        count++;
    };
    
    int r = sizeof(records)/sizeof(records[0]);
    sort(records, records+r);
    
    for (int i = 0; i < r; i++) {
        cout << records[i] << endl;
    };
    fin.close();
    
    ofstream fout;
    fout.open("/Users/pippo/Desktop/Week 16 Prog 6/sorted records.txt");
    
    for (int i = 0; i < 10; i++) {
        fout << records[i] << endl;
    }
    cout << "Philip Pesic 12/5/22" << endl;
    return 0;
}
