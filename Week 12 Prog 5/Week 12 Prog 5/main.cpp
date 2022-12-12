//
//  main.cpp
//  Week 12 Prog 5
//
//  Created by Pippo Pesic on 11/3/22.
//

#include <iostream>

using namespace std;

#include <string>

/* srand example */

#include <ctime>

#include <stdio.h>      /* NULL */

#include <stdlib.h>     /* srand, rand */

#include "colorPicker.h"

 

int main()

{

colorPicker P;

//

P.printAllColors();

cout << "Random Color: " << P.randomColor() << endl;
cout << "Philip Pesic 11/6/22" << endl;

return 0;

}
