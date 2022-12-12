//
//  main.cpp
//  Week 5 Prog 4 Class
//
//  Created by Pippo Pesic on 9/14/22.
//

#include <iostream>
#include <string>
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
