//
//  main.cpp
//  Week 5 p2 Class
//
//  Created by Pippo Pesic on 9/14/22.
//

#include <iostream>
#include <string>
using namespace std;
class philipsClass{
    public:
    void setName(string x) {
        name = x;
    }
    string getName() {
        return name;
    }
private:
    string name;
};
