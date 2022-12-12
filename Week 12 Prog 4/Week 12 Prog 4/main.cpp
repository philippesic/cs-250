//
//  main.cpp
//  Week 12 Prog 4
//
//  Created by Pippo Pesic on 11/3/22.
//

#include <iostream>
#include "Isosceles.hpp"
#include "Triangle.hpp"
using namespace std;

int main() {
    int base, height, equalSide;
    
    cout << "Please type in a base lenght: ";
    cin >> base;
    cout << "Please type in a height: ";
    cin >> height;
    cout << "Please type in an equalSide: ";
    cin >> equalSide;
    
    Isosceles myTriangle(base, equalSide, height);
    
    cout << endl;
    myTriangle.printInfo();
    cout << "Philip Pesic 11/6/22" << endl;
    return 0;
}
