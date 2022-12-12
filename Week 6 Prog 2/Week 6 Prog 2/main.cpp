//
//  main.cpp
//  Week 6 Prog 2
//
//  Created by Pippo Pesic on 9/25/22.
//
//
#include <iostream>
using namespace std;

template <class T>
class Rectangle {
    T width, height;
  public:
    void set_values (T x,T y) {
        width = x;
        height = y;
    };
    T area() {
       T answer = width * height;
       // complete this function so the code works
       return answer;
    }
};

int main () {  // Use this driver program

  // Use set_values function to set values
  Rectangle<float> rect1;
  rect1.set_values (5,6);
  cout << "area: " << rect1.area() << endl;
// Use set_values function to set values
  Rectangle<double> rect2;
  rect2.set_values (3,4);
  cout << "area: " << rect2.area() << endl;
  cout << "Philip pesic 9/25/22" << endl;
    return 0;
}
