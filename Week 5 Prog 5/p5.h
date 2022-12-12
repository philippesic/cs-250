//
//  main.cpp
//  Week 5 Prog 5 Class
//
//  Created by Pippo Pesic on 9/14/22.
//

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
