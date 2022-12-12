//
//  main.cpp
//  Midterm
//
//  Created by Pippo Pesic on 10/20/22.
//

#include <iostream>
#include <string>
using namespace std;

class Part {
public:
    Part() {
        cout << "Part Default Constructor" << endl;
    }
    
    ~Part() {
        cout << "Part Destructor" << endl;
        cout << "Philip Pesic 10/23/22" << endl;
    }
};

class Whole {
    Part part1;
    string wholeName;
    
public:
    Whole() {
        wholeName = "NONE";
        cout << "Whole Default Constructor" << endl;
    }
    
    Whole(string name) {
        name = wholeName;
        cout << wholeName << endl;
        cout << "Whole Parametized Constructor" << endl;
    }
    
    ~Whole() {
        cout << "Whole Destructor" << endl;
        cout << "wholeName: " << wholeName << endl;
    }
    
    string getName() {
        return wholeName;
    }
};




int main() {
    Whole W1;
    Whole W2("w2");
    cout << "W1 wholeName: " << W1.getName() << endl;
    cout << "W2 wholeName: " << W2.getName() << endl;
    return 0;
}
