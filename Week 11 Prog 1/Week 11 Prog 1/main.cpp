//
//  main.cpp
//  Week 11 Prog 1
//
//  Created by Pippo Pesic on 10/24/22.
//

#include <iostream>
using namespace std;

void add(int &x);

int main() {
    int data = 10;
    add(data);
    cout << "Value in data: " << data << endl;
    cout << "Philip Pesic 10/30/22" << endl;
    return 0;
}

void add(int &x) {
    int input;
    cout << "Enter the value to be added in data " << endl;
    cin >> input;
    x = x + input;
}
