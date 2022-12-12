//
//  main.cpp
//  Week 4 Prog 2
//
//  Created by Pippo Pesic on 9/11/22.
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

int main() {
    philipsClass bo;
    bo.setName("Philip Pesic");
    cout << bo.getName() << endl;
    cout << "Philip Pesic 9/11/22" << endl;
    return 0;
}
