//
//  main.cpp
//  Week 16 Prog 1
//
//  Created by Pippo Pesic on 11/28/22.
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;
    fout.open("/Users/pippo/Desktop/Week 16 Prog 1/prog1.txt");

    for(int i = 1; i < 11; i++) {
        fout << i << endl;
    }
    
    cout << "Philip Pesic 12/5/22" << endl;
    return 0;
}
