//
//  main.cpp
//  Week 4 Prog 1
//
//  Created by Pippo Pesic on 9/11/22.
//

#include <iostream>
using namespace std;

class philipsClass{
public:
    void text(){
        cout << "Hello World" << endl;
    }
};

int main() {
    philipsClass philipsObject;
    philipsObject.text();
    cout << "Philip Pesic 9/11/22" << endl;
    return 0;
}
