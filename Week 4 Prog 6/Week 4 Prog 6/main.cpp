//
//  main.cpp
//  Week 4 Prog 6
//
//  Created by Pippo Pesic on 9/11/22.
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

int main() {
    box B1;
    B1.setWidth(2);
    B1.setHeight(3);
    B1.setDepth(4);
        cout << "Height = " << B1.getHeight() << endl;
        cout << "Area = " << B1.calcArea() << endl;
        cout << "Volume = " << B1.calcVolume() << endl;
    // Box 2 - Test zero value error for calc Area and Volume of sides functions
    box B2;
    B2.setWidth(3);
    B2.setHeight(4);
        cout << "Depth = " << B2.getDepth() << endl;
        cout << "Area = " << B2.calcArea() << endl;
        cout << "Volume = " << B2.calcVolume() << endl;
    cout << "Philip Pesic 9/11/22" << endl;
    return 0;
    }
