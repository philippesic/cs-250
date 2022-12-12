//
//  main.cpp
//  Week 15 Prog 1C
//
//  Created by Pippo Pesic on 11/25/22.
//

#include <iostream>
#include "Sally.hpp"
using namespace std;
int main() {
    Sally a(34);
    Sally b(21);
    Sally c;
    
    c=a.add(b);
    cout << c.num << endl;
    cout << "Philip Pesic 11/27/22" << endl;
    return 0;
}
