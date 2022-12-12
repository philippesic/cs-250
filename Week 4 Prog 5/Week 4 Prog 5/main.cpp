//
//  main.cpp
//  Week 4 Prog 5
//
//  Created by Pippo Pesic on 9/11/22.
//

// classes example
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area() {
       int answer = width * height;
       // complete this function so the code works
       return answer;
    }
};

void Rectangle::set_values (int x, int y) {
     // complete this function so the code works
    width = x;
    height = y;
}

int main () {  // Use this driver program

  // Use set_values function to set values
  Rectangle rect1;
  rect1.set_values (5,6);
  cout << "area: " << rect1.area() << endl;
// Use set_values function to set values
  Rectangle rect2;
  rect2.set_values (3,4);
  cout << "area: " << rect2.area() << endl;
  cout << "Philip pesic 9/11/22" << endl;
    return 0;
}
