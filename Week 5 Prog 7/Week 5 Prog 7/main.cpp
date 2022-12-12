//
//  main.cpp
//  Week 5 Prog 7
//
//  Created by Pippo Pesic on 9/14/22.
//

#include <iostream>
#include "p7.h"
using namespace std;

int main() {
    circle c1;
    c1.setRadius(5);
    cout << "Radius = " << c1.getRadius() << endl;
    cout << "Circumference = " << c1.calcCircumference() << endl;
    cout << "Area = " << c1.calcArea() << endl;
    cout << "Diameter = " << c1.calcDiameter() << endl;
    
    circle c2;
    cout << "Radius = " << c2.getRadius() << endl;
    cout << "Circumference = " << c2.calcCircumference() << endl;
    cout << "Area = " << c2.calcArea() << endl;
    cout << "Diameter = " << c2.calcDiameter() << endl;
    
    cout << "Philip Pesic 9/18/22" << endl;
    return 0;
}
