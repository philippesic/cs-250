//
//  main.cpp
//  Week 7 Prog 2
//
//  Created by Pippo Pesic on 10/2/22.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
 
// Step 1A – Define a class to be used as a PART.
 
class myPartClass{
    private:
   double d;
    public:
      myPartClass () { d = 0; }                // default constructor
      myPartClass ( double inD ) { d = inD; }  // paramaterized constructor
      double getD() { return d; }
      void setD( double inD ) {  d = inD; }
};
 
// Step 1B – Define a WHOLE class – composed of part classes.
 
class myWholeClass{
private:
     int x;
     myPartClass  Part1;    // Placing a part as private – Simple declaration statement
     // The class is a new TYPE, so you can use it in a declaration statement
     // The declaration statements can be use in the PRIVATE section of another class..
 
public:
     void setPart1D ( double inD ) { Part1.setD(inD); }
     // need function to access private declaration part1
     double getPart1D () { return Part1.getD(); }
     // need function to access private declaration part1
      
     int getX() { return x; }
     void setX( int inX ) { x = inX; }
      
     myPartClass Part2;   // Placing a part as public – Simple declaration statement
     // The class is a new TYPE, so you can use it in a declaration statement
     // The declaration statements can be use in the PUBLIC section of another class..
   
     myWholeClass() {x = 0;}                        // default myWholeClass constructor
     myWholeClass( int inX, double inD1, double inD2 ) // parm myWholeClass constructor
        { x = inX; Part1.setD(inD1); Part2.setD(inD2); }
};
 
int main() {
 
   //====================================================================================
   //Step 2 – Declaration statement for WHOLE class.
 
   myWholeClass  Whole1;  // Default constructor
    
   // look at default values
   cout << "Whole 1 - default constuctor - whole X = " << Whole1.getX() << endl;
   cout << "Whole 1 - default constuctor - Part 1 d = " <<  Whole1.getPart1D() << endl;
   cout << "Whole 1 - default constuctor - Part 2 d = " <<  Whole1.Part2.getD() << endl;
 
   //Step 3 – Use it with the dot notation
 
   Whole1.setX(20);
   cout << "Whole 1 - set whole X = " << Whole1.getX() << endl;
 
   Whole1.setPart1D( 21);
   // Defined in private section so you have to use the functions.
   cout << "Whole 1 - set Part 1 d = " <<  Whole1.getPart1D() << endl;
 
   Whole1.Part2.setD(22);
   // Defined in public section so you can use part with dot notation.
   cout << "Whole 1 - set Part 2 d = " <<  Whole1.Part2.getD() << endl << endl;
 
   //====================================================================================
   //Step 2 – Declaration statement for WHOLE class.
 
   myWholeClass  Whole2( 91, 92, 93);  // Parmaterized constructor
    
   // look at default values
   cout << "Whole 2 - Parm constuctor - whole X = " << Whole2.getX() << endl;
   cout << "Whole 2 - Parm constuctor - Part 1 d = " <<  Whole2.getPart1D() << endl;
   cout << "Whole 2 - Parm constuctor -  Part 2 d = " <<  Whole2.Part2.getD() << endl;
 
   //Step 3 – Use it with the dot notation
 
   Whole2.setX(51);
   cout << "Whole 2 - set whole X = " << Whole2.getX() << endl;
 
   Whole2.setPart1D( 52);
   // Defined in private  section so you have to use the functions.
   cout << "Whole 2 - set Part 1 d = " <<  Whole2.getPart1D() << endl;
 
   Whole2.Part2.setD(53);
   // Defined in public section so you can use part with dot notation.
   cout << "Whole 2 - set Part 2 d = " <<  Whole2.Part2.getD() << endl;
   //====================================================================================
 
    cout << "Philip Pesic 10/2/22" <, endl;
   return 0;
}
 
 






 
 
 
