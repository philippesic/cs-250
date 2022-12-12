//
//  Triangle.cpp
//  Week 12 Prog 4
//
//  Created by Pippo Pesic on 11/3/22.
//

#include "Triangle.hpp"

Triangle::Triangle() {
    height = 0;
}

Triangle::Triangle(int newHeight) {
    height = newHeight;
}

int Triangle::getHeight() const {
    return height;
}

void Triangle::setHeight(int newHeight) {
    height = newHeight;
}

Triangle::~Triangle() {}

double Triangle::getArea(int base) const {
    return (0.5 * base * height);
}
