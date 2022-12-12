//
//  main.cpp
//  Week 6 Prog 4
//
//  Created by Pippo Pesic on 9/25/22.
//

#include <iostream>
using namespace std;

template <class T>
class circle {
    T radius;
public:
   
    T getRadius(void) {return radius;}
        void setRadius(T inRadius) {radius = inRadius;}
    
    T calcCircumference() {
        T circumference = radius * 3.14159;
        return circumference;
    }
    
    T calcArea() {
        T area = 3.14159 * (radius^2);
        return area;
    }
    
    T calcDiameter() {
        T diameter = radius * 2;
        return diameter;
    }
};

int main() {
    circle<double> c1;
    c1.setRadius(5);
    cout << "Radius = " << c1.getRadius() << endl;
    cout << "Circumference = " << c1.calcCircumference() << endl;
    cout << "Area = " << c1.calcArea() << endl;
    cout << "Diameter = " << c1.calcDiameter() << endl;
    
    circle<int> c2;
    cout << "Radius = " << c2.getRadius() << endl;
    cout << "Circumference = " << c2.calcCircumference() << endl;
    cout << "Area = " << c2.calcArea() << endl;
    cout << "Diameter = " << c2.calcDiameter() << endl;
    
    cout << "Philip Pesic 9/25/22" << endl;
    return 0;
}

