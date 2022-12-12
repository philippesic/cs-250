//
//  main.cpp
//  Week 5 Prog 4
//
//  Created by Pippo Pesic on 9/11/22.
//

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class colors {
private:
    string colorArray[7] = {"red", "orange", "yellow", "green", "blue", "purple", "white"};
public:
    void printColor() {
        int x = rand() % 6 + 0;
        cout << colorArray[x] << endl;
    }
};

int main() {
    colors po;
    po.printColor();
    cout << "Philip Pesic 9/11/22" << endl;
    return 0;
}
