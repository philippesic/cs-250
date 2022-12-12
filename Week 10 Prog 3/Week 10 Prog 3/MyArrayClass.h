//
//  MyArrayClass.h
//  Week 10 Prog 3 Class
//
//  Created by Pippo Pesic on 10/19/22.
//

#include <iostream>
using namespace std;

template <class T>
class MyArrayClass {
    int arraySize;
    T* pArray;
public:
    MyArrayClass() {
        arraySize = 0;
        pArray = NULL;
    }
    
    MyArrayClass(T size) {
        if (size > 0) {
            pArray = new T[size];
            arraySize = size;
        }
    }
    
    void setSize(T size) {
        if (pArray == NULL) {
            pArray = new T[size];
            arraySize = size;
        }
    }
    
    void setAllValues() {
        if (pArray != NULL) {
            cout << "Enter values: ";
            for (int i = 0; i < arraySize; i++) {
                cin >> *(pArray + i);
            }
        }
    }
    
    void printAll() {
        if (pArray != NULL) {
            for (int i = 0; i < arraySize; i++) {
                cout << *(pArray + i) << " ";
            }
            cout << endl;
        }
    }
};

