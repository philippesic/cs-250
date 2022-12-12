//
//  main.cpp
//  Week 15 Prog 3
//
//  Created by Pippo Pesic on 11/26/22.
//

#include <iostream>
using namespace std;

class Complex
{
    private:
      float real;
      float imag;
    public:
       Complex(): real(0), imag(0){ }
       void input()
       {
           cout<<"Enter real and imaginary parts respectively: ";
           cin>>real;
           cin>>imag;
       }
       Complex operator - (Complex c2)    /* Operator Function */
       {
           Complex temp;
           temp.real=real-c2.real;
           temp.imag=imag-c2.imag;
           return temp;
       }
    Complex operator + (Complex a2)    /* Operator Function */
    {
        Complex temp;
        temp.real=real+a2.real;
        temp.imag=imag+a2.imag;
        return temp;
    }

    Complex operator * (Complex m2)    /* Operator Function */
    {
        Complex temp;
        temp.real=real*m2.real;
        temp.imag=imag*m2.imag;
        return temp;
    }

    Complex operator / (Complex d2)    /* Operator Function */
    {
        Complex temp;
        temp.real=real/d2.real;
        temp.imag=imag/d2.imag;
        return temp;
    }

    Complex operator ++ ()    /* Operator Function */
    {
        Complex temp;
        temp.real=real++;
        temp.imag=imag++;
        return temp;
    }
    
       void output()
       {
           if(imag<0)
               cout<<"Output Complex number: "<<real<<imag<<"i" << endl;
           else
               cout<<"Output Complex number: "<<real<<"+"<<imag<<"i" << endl;
       }
};
int main()
{
    Complex c1, c2, a1, a2, m1, m2, d1, d2, i1, i2, result;
    cout<<"Enter first complex number:\n";
    c1.input();
    cout<<"Enter second complex number:\n";
    c2.input();
    result=c1-c2; /* c2 is furnised as an argument to the operator function. */
    result.output();
    
    cout<<"Enter first complex number:\n";
    a1.input();
    cout<<"Enter second complex number:\n";
    a2.input();
    result=a1+a2; /* c2 is furnised as an argument to the operator function. */
    result.output();
    
    cout<<"Enter first complex number:\n";
    m1.input();
    cout<<"Enter second complex number:\n";
    m2.input();
    result=m1*m2; /* c2 is furnised as an argument to the operator function. */
    result.output();
    
    cout<<"Enter first complex number:\n";
    d1.input();
    cout<<"Enter second complex number:\n";
    d2.input();
    result=a1/d2; /* c2 is furnised as an argument to the operator function. */
    result.output();
    
    cout<<"Enter first complex number:\n";
    i1.input();
    cout<<"Enter second complex number:\n";
    i2.input();
    result=i1+i2; /* c2 is furnised as an argument to the operator function. */
    result.output();
/* In case of operator overloading of binary operators in C++ programming, the object on right hand side of operator is always assumed as argument by compiler. */

    cout << "Philip Pesic 11/27/22" << endl;
    return 0;
}

