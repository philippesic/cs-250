//
//  main.cpp
//  Week 11 Prog 2
//
//  Created by Pippo Pesic on 10/24/22.
//

#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main() {
    int betty = 13;
    int sandy = 13;
    
    passByValue(betty);
    passByReference(&sandy);
    
    cout << "Betty is now " << betty << endl;
    cout << "Sandy is now " << sandy << endl;
    cout << "Philip pesic 10/30/22" << endl;
    return 0;
}

void passByValue(int x) {
    x = 99;
}

void passByReference(int *x) {
    *x = 66;
}
