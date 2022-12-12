//
//  main.cpp
//  Week 6 Prog 1
//
//  Created by Pippo Pesic on 9/25/22.
//

#include <iostream>
#include <string>
using namespace std;

template <class T>
class aThing {

public:

    T getWeight(void) { return weight; }

    void setWeight(T inWeight) {weight = inWeight;}

private:

    T weight;

};

int main()

{

    aThing<int> ThingOne;

    ThingOne.setWeight(110);

    cout << "Use Function/Method get Weight - "<< "Weight is: " << ThingOne.getWeight() << endl;

    aThing<float> ThingTwo;

    ThingTwo.setWeight(110);

    cout << "Use Function/Method get Weight - "<< "Weight is: " << ThingTwo.getWeight() << endl;

    cout << "Philip Pesic 9/25/22" << endl;
    return 0;

}

