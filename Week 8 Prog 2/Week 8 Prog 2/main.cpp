//
//  main.cpp
//  Week 8 Prog 2
//
//  Created by Pippo Pesic on 10/5/22.
//

#include <iostream>
using namespace std;
 
// Step 1 - Define a class
class myClass {
private:
 int x;
public:
 myClass() {x = 0;}
 myClass(int inX) {x = inX;}
 int getX() {return x;}
    void setX(int inX) {x = inX;}
};
 
int main()
{
 // Step 2 – Regular Declared instance of a class
 myClass C1;
 
 //Step 3 – Use the class – call with Dot Notation the public functions
 C1.setX(42);
 cout << C1.getX( ) << endl;
 
    myClass * ptrMyClass2; //Defines Pointer Object
     ptrMyClass2 = NULL; //Assigns NULL
    
    myClass C2(123); //Defines C2 Object

     ptrMyClass2 = &C2; //Assigns address of C2 to Object
      
     cout << "Used Arrow - Value of X is: " << ptrMyClass2 -> getX() << endl; //Returns address of C2 to getX
     ptrMyClass2 -> setX(333); //Sets Value to 333
     cout << "Used Arrow - Value of X is: " << ptrMyClass2 -> getX() << endl; //Returns value to getX
     cout << "Philip Pesic 10/9/22" << endl;
 return 0;
}
