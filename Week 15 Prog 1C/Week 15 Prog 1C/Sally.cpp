//
//  Sally.cpp
//  Week 15 Prog 1C
//
//  Created by Pippo Pesic on 11/25/22.
//

#include <iostream>
#include "Sally.hpp"
using namespace std;

Sally::Sally() {}

Sally::Sally(int a) {
    num = a;
}

Sally Sally::operator+(Sally aso) {
    Sally brandNew;
    brandNew.num = num + aso.num;
    return (brandNew);
}
