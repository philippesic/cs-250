//
//  main.cpp
//  Week 6 Prog 6 Class
//
//  Created by Pippo Pesic on 9/14/22.
//

#include <iostream>
using namespace std;

class box {
    int width, height, depth;
public:
    int getWidth(void) {
        return width;
    }
    void setWidth(int inWidth) {
        width = inWidth;
    }
    
    int getHeight(void) {
        return height;
    }
    void setHeight(int inHeight) {
        height = inHeight;
    }
    
    int getDepth(void) {
        return depth;
    }
    void setDepth(int inDepth) {
        depth = inDepth;
    }
    
    int calcArea() {
        int area = (( height * width ) * 4)  + ( ( depth * width ) * 2);
        return area;
    }
    
    int calcVolume() {
        int volume = height * width * depth;
        return volume;
    }
    
};
