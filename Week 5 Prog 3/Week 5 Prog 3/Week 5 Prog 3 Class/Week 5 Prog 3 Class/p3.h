//
//  main.cpp
//  Week 5 Prog 3 Class
//
//  Created by Pippo Pesic on 9/14/22.
//

#include <iostream>
#include <string>
using namespace std;

class aThing {

public:  // Public means that is can be access in step 3 with the dot notation

    double getWeight(void) { return weight; } // public functions  accessible by dot notation

    void setWeight( double inWeight ) { weight = inWeight; }

private: // Private means that it can NOT be accessed with the dot notation, but indirectly with a public function

    double weight; // private variables only accessible by a function

};
