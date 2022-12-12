//
//  main.cpp
//  Week 12 Prog 7
//
//  Created by Pippo Pesic on 11/3/22.
//

#include <iostream>
using namespace std;

class Square {
    int width, height;
public:
    
    int getWidth() {
        return width;
    }
    
    void setWidth(int inWidth) {
        width = inWidth;
    }
    
    int getHeight() {
        return height;
    }
    
    void setHeight(int inHeight) {
        height = inHeight;
    }
    
    int getArea() {
        return (width * height);
    }
};

class Cube:public Square {
    int depth;
public:
    
    int getDepth() {
        return depth;
    }
    
    void setDepth(int inDepth) {
        depth = inDepth;
    }
    
    int getVolume() {
        return (getArea() * depth);
    }
    
};

int main() {
    Cube cube1, cube2, cube3;
    cube1.setWidth(2);
    cube1.setHeight(1);
    cube1.setDepth(3);
    
    cube2.setWidth(4);
    cube2.setHeight(6);
    cube2.setDepth(5);
    
    cube3.setWidth(3);
    cube3.setHeight(1);
    cube3.setDepth(7);
    
    cout << "Cube 1 Volume = " << cube1.getVolume() << endl;
    cout << "Cube 2 Volume = " << cube2.getVolume() << endl;
    cout << "Cube 3 Volume = " << cube3.getVolume() << endl;
    
    cout << "Philip Pesic 11/6/22" << endl;
    return 0;
}
