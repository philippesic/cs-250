//
//  main.cpp
//  Week 3 Prog 1
//
//  Created by Pippo Pesic on 9/4/22.
//

#include <iostream>
using namespace std;
int main() {
    char cf;
    double temp;
    double result;
    cout << "Choose your starting temperature (c/f) " << endl;
    cin >> cf;
    cout << "Enter temperature: " << endl;
    cin >> temp;
    if (cf == 'c') {
        result = (temp * 1.8) + 32;
    }
    else {
        result = (temp - 32) * 5/9;
    }
    cout << result << " degrees" << endl;
    cout << "Philip Pesic 9/4/22" << endl;
    return 0;
}
