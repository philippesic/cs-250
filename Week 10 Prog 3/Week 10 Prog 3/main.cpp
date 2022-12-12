//
//  main.cpp
//  Week 10 Prog 3
//
//  Created by Pippo Pesic on 10/19/22.
//

#include <iostream>
#include "MyArrayClass.h"
using namespace std;

int main() {
    MyArrayClass <int>array1;
    array1.setSize(7);
    array1.setAllValues(); //Input 10,15,20,25,30,35,42
    array1.printAll();
    
    MyArrayClass <float>array2(7);
    array2.setAllValues(); //Input 10,15,20,25,30,35,42
    array2.printAll();

    MyArrayClass<double> * ptrArray1 = new MyArrayClass<double>();
    ptrArray1->setSize(7);
    ptrArray1->setAllValues(); //Input 100,150,200,250,300,350,420
    ptrArray1->printAll();
    
    cout << "Philip Pesic 10/23/22" << endl;
    return 0;
};
