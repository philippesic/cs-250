//
//  main.cpp
//  Week 8 Prog 1
//
//  Created by Pippo Pesic on 10/5/22.
//

#include <iostream>
#include <string>
using namespace std;

void testNullPtr() {
    int * ptrInt = NULL;
    int testNull;
    ptrInt = &testNull;
    *ptrInt = 42;
    cout << ptrInt << endl;
}

void memoryLeak() {
    double * ptrDouble = NULL;
    double testDouble;
    ptrDouble = &testDouble;
    *ptrDouble = 3.123456789;
    cout << testDouble << endl;
}

string * deletePointer() {
    string * ptrString = NULL;
    string testString;
    ptrString = &testString;
    *ptrString = "Carlos";
    return ptrString;
}

void testTwoAlias() {
    int * ptrAlias1 = NULL;
    int * ptrAlias2 = NULL;
    int testAlias;
    ptrAlias1 = &testAlias;
    *ptrAlias1 = 42;
    ptrAlias2 = ptrAlias2;
    cout << ptrAlias1 << endl;
    cout << ptrAlias2 << endl;
}

int main () {
    testNullPtr();
    memoryLeak();
    deletePointer();
    testTwoAlias();
    cout << "Philip Pesic 10/9/22" << endl;
  return 0;
}
