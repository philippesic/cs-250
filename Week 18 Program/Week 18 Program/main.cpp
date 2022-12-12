//
//  main.cpp
//  Week 18 Program
//
//  Created by Pippo Pesic on 12/9/22.
//
// Code for Polymorphism -

// Highly suggest you print out Polymorphism lecture and restudy it !
// Find and fix all the "comments', "syntax", "math" and "logic"  ERRORS
// Write a comment, explaining what you did, at each line that was fixed

// When completed, upload good code and screen prints of successful execution.

// Identify the three steps to a class with comments.

#include <iostream>
using namespace std; //Changed standard to std

//Create BASE class
class polygon {
protected:
    int width, height;
public:
    void set_values(int inW, int inH){
        width=inW; height=inH;
    }
    int getArea() { //Changed ( to {
            return 0; //Removed ()
    }
};

//Create DERIVED class
class rectangle : public polygon{
public:
    int getArea() { //Override polymorphic function here in this line
        return width*height;
    }
};

//Create DERIVED  class
class triangle : public polygon {
public:
    int getArea(){return width*height*1/2;} //Changed 1/42 to 1/2 for triangle
};

//Create Poly function
void polyFun(polygon *ptrBase) {
    //REPEAT code by using function
    //Key feature - base class pointer as argument..
    cout << ptrBase->getArea() << endl; //Changed . to -> since arrow is needed for a pointer
}

int main() {
    //Regular static declarations
    rectangle rect;
    triangle trg1;
    //Regular use with dot notation
    cout << "-----------" << endl; //Changed end to endl
    rect.set_values(3, 4);
    cout << " Area of rectangle is: " << rect.getArea() << endl; //Changed out to cout
    trg1.set_values(3, 5);
    cout << " Area of triangle is: " << trg1.getArea() << endl; //Changed >> to <<
    //......................................
    
    //WHY ... use ptr..?? FOR Polymorphism...
    rectangle *ptrRect = NULL; //Be absolutely clear that it has NO address
    triangle *ptrTrg1 = NULL;
    polygon *ptrPoly = NULL;

    ptrRect = &rect; //assign address to ptr variables
    ptrTrg1 = &trg1;

    //Polymorphism - ONE set of code that can work for MANY derived class.
    //key idea is - Declare ONE base class pointer... and assign ANY Derived class address to it
    // method 2 - REAL GOOD Method
    // make a function - so I only type code ONCE
    cout << "-----------" << endl; //Changed < to <<
    cout << " Area of triangle is: "; polyFun(&rect);
    cout << " Area of rectangle is: ";  polyFun(&trg1); //Added ;
    cout << "-----------" << endl; //Closed string

    cout << "Philip Pesic 12/11/22" << endl; //Added signature
    return 0;
}
