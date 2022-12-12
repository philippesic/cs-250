//
//  main.cpp
//  Week 15 Prog 1A
//
//  Created by Pippo Pesic on 11/25/22.
//

#include <iostream>
using namespace std;

void printNumber(int x) {
    cout << "Printing int: " << x << endl;
}

void printNumber(float x) {
    cout << "Printing float: " << x << endl;
}

int main() {

    int a = 54;
    float b = 32.4896;
    
    printNumber(a);
    printNumber(b);
    cout << "Philip Pesic 11/27/22" << endl;
    return 0;
}
