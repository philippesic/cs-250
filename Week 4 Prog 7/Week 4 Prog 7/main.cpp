//
//  main.cpp
//  Week 4 Prog 7
//
//  Created by Pippo Pesic on 9/11/22.
//

#include <iostream>
using namespace std;

class circle {
    int radius;
public:
   
    int getRadius(void) {return radius;}
        void setRadius(int inRadius) {radius = inRadius;}
    
    int calcCircumference() {
        int circumference = radius * 3.14159;
        return circumference;
    }
    
    int calcArea() {
        int area = 3.14159 * (radius^2);
        return area;
    }
    
    int calcDiameter() {
        int diameter = radius * 2;
        return diameter;
    }
};

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
    
    cout << "Philip Pesic 9/11/22" << endl;
    return 0;
}
