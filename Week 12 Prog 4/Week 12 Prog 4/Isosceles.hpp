//
//  Isosceles.hpp
//  Week 12 Prog 4
//
//  Created by Pippo Pesic on 11/3/22.
//

#ifndef Isosceles_hpp
#define Isosceles_hpp

#include <stdio.h>
#include "Triangle.hpp"

class Isosceles:public Triangle {
public:
    Isosceles();
    Isosceles(int, int, int);
    
    int getBase() const;
    int getSideOne() const;
    
    void setBase(int);
    void setOneSide(int);
    
    ~Isosceles();
    
    int getPerimeter() const;
    void printInfo() const;
    
private:
    int base, sideOne;
};
#endif /* Isosceles_hpp */
