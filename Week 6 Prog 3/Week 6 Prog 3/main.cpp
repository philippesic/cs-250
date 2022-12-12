//
//  main.cpp
//  Week 6 Prog 3
//
//  Created by Pippo Pesic on 9/25/22.
//

#include <iostream>
using namespace std;

template <class T>
class box {
    T width, height, depth;
public:
    T getWidth(void) {
        return width;
    }
    void setWidth(T inWidth) {
        width = inWidth;
    }
    
    T getHeight(void) {
        return height;
    }
    void setHeight(T inHeight) {
        height = inHeight;
    }
    
    T getDepth(void) {
        return depth;
    }
    void setDepth(T inDepth) {
        depth = inDepth;
    }
    
    T calcArea() {
        T area = (( height * width ) * 4)  + ( ( depth * width ) * 2);
        return area;
    }
    
    T calcVolume() {
        T volume = height * width * depth;
        return volume;
    }
    
};

int main() {
    box<int> B1;
    B1.setWidth(2);
    B1.setHeight(3);
    B1.setDepth(4);
        cout << "Height = " << B1.getHeight() << endl;
        cout << "Area = " << B1.calcArea() << endl;
        cout << "Volume = " << B1.calcVolume() << endl;
    // Box 2 - Test zero value error for calc Area and Volume of sides functions
    box<double> B2;
    B2.setWidth(3);
    B2.setHeight(4);
        cout << "Depth = " << B2.getDepth() << endl;
        cout << "Area = " << B2.calcArea() << endl;
        cout << "Volume = " << B2.calcVolume() << endl;
    cout << "Philip Pesic 9/25/22" << endl;
    return 0;
    }
