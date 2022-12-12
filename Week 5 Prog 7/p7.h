//
//  main.cpp
//  Week 5 Prog 7 Class
//
//  Created by Pippo Pesic on 9/14/22.
//

#include <iostream>

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
