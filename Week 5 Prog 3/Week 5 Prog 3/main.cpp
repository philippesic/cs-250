//
//  main.cpp
//  Week 5 Prog 3
//
//  Created by Pippo Pesic on 9/14/22.
//

#include <iostream>
#include <string>
#include "p3.h"
using namespace std;

// STEP 1 - DEFINE THE new datatype/Class  'aThing'

int main()

{ // STEP 2 - DECLARATION - USE the new datatype/class 'aThing' in a Declaration statement to create 'ThingOne'.

    aThing ThingOne;

    // STEP 3 - Use the OBJECT defined in step 2 - With dot notation

    ThingOne.setWeight(110);

    cout << "Use Function/Method get Weight - "<< "Weight is: " << ThingOne.getWeight() << endl;

    //system("PAUSE");  // MAC User comment this line out.

    cout << "Philip Pesic 9/18/22" << endl;
    return 0;

}
