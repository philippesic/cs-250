//
//  main.cpp
//  Week 5 Prog 6
//
//  Created by Pippo Pesic on 9/14/22.
//

#include <iostream>
#include "p6.h"
using namespace std;

int main() {
    box B1;
    B1.setWidth(2);
    B1.setHeight(3);
    B1.setDepth(4);
        cout << "Height = " << B1.getHeight() << endl;
        cout << "Area = " << B1.calcArea() << endl;
        cout << "Volume = " << B1.calcVolume() << endl;
    // Box 2 - Test zero value error for calc Area and Volume of sides functions
    box B2;
    B2.setWidth(3);
    B2.setHeight(4);
        cout << "Depth = " << B2.getDepth() << endl;
        cout << "Area = " << B2.calcArea() << endl;
        cout << "Volume = " << B2.calcVolume() << endl;
    cout << "Philip Pesic 9/18/22" << endl;
    return 0;
    }

