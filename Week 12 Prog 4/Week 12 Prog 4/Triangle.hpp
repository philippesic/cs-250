//
//  Triangle.hpp
//  Week 12 Prog 4
//
//  Created by Pippo Pesic on 11/3/22.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Triangle {
public:
    Triangle();
    Triangle(int);
    
    int getHeight() const;
    void setHeight(int);
    
    ~Triangle();
    
    double getArea(int) const;
    
private:
    int height;
};

#endif /* Triangle_hpp */
