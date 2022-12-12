//
//  main.cpp
//  Week 3 Prog 4
//
//  Created by Pippo Pesic on 9/4/22.
//

#include <iostream>
#include <cmath>
using namespace std;
int squareInteger( int x){
    return pow(x, 2);
}
double squareDouble( double d){
    return pow(d, 2);
}
float squareFloat ( float f){
    return pow(f, 2);
}

int main() {
    int x = 4;
    double d = 4.9;
    float f = 9.4;
    
    cout << "squareInteger(4)=" << squareInteger(x) << endl;
    cout << "squareInteger(4.9)=" << squareInteger(d) << endl;
    cout << "squareInteger(9.4)=" << squareInteger(f) << endl;
    
    cout << "squareDouble(4)=" << squareDouble(x) << endl;
    cout << "squareDouble(4.9)=" << squareDouble(d) << endl;
    cout << "squareDouble(9.4)=" << squareDouble(f) << endl;
    
    cout << "squareFloat(4)=" << squareFloat(x) << endl;
    cout << "squareFloat(4.9)=" << squareFloat(d) << endl;
    cout << "squareFloat(9.4)=" << squareFloat(f) << endl;
    
    cout << "Philip Pesic 9/4/22" << endl;
    return 0;
}

