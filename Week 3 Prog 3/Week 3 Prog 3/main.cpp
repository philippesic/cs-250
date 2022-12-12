//
//  main.cpp
//  Week 3 Prog 3
//
//  Created by Pippo Pesic on 9/4/22.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    for (int multiplier = 1; multiplier <=12; multiplier++) {
        for (int counter = 1; counter <= 12; counter ++){
            cout << setw(5);
            cout << multiplier * counter << " "; }
        cout << endl; }
cout << "Philip Pesic 9/4/22" << endl; return 0;
}
