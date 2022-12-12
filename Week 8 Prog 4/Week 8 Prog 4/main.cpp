//
//  main.cpp
//  Week 8 Prog 4
//
//  Created by Pippo Pesic on 10/5/22.
//

#include <iostream>
using namespace std;
#include <string>

class myClass {
    private:
       int x;
    public:
       myClass( ) { x = 0; }
       myClass( int inX ) { x = inX; }
       int getX( ) { return x; }
       void setX( int inX ) { x = inX; }
};

void fun1( myClass & inC1) //Declares inC1 as pointer to myClass
{
    inC1.setX(42); //Sets C1 X to 42
 }

void fun2( myClass * inC2)
{
    inC2->setX(66);
 }

int main()
{
  std::string name;
  std::cout << "What is your name? ";
  getline (std::cin, name);
  std::cout << "Hello friend,  " << name << "!\n";
  
  myClass mainC1;
  cout << mainC1.getX() << endl;
  fun1( mainC1 ); //Calls fun1 with the object mainC1 as a parameter, pointer gives mainC1 value 42
  cout << mainC1.getX() << endl; //Returns the value that it recieved from pointer
  fun2 ( &mainC1 );
  cout << mainC1.getX() << endl;
  cout << "Philip Pesic 10/9/22" << endl;
    return 0;
}
