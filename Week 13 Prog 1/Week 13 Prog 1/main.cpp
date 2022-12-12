//
//  main.cpp
//  Week 10 Prog 1
//
//  Created by Pippo Pesic on 11/10/22.
//

#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number from 0-10" << endl;
    cin >> num;
    cout << endl;
    if (num == 0) {
        cout << "Zero" << endl;
    }
    else if (num == 1) {
        cout << "One" << endl;
    }
    else if (num == 2) {
        cout << "Two" << endl;
    }
    else if (num == 3) {
        cout << "Three" << endl;
    }
    else if (num == 4) {
        cout << "Four" << endl;
    }
    else if (num == 5) {
        cout << "Five" << endl;
    }
    else if (num == 6) {
        cout << "Six" << endl;
    }
    else if (num == 7) {
        cout << "Seven" << endl;
    }
    else if (num == 8) {
        cout << "Eight" << endl;
    }
    else if (num == 9) {
        cout << "Nine" << endl;
    }
    else if (num == 10) {
        cout << "Ten" << endl;
    }
    else {
        cout << "Invalid Number" << endl;
    }

    switch (num) {
        case 0: cout << "Zero" << endl; break;
        case 1: cout << "One" << endl; break;
        case 2: cout << "Two" << endl; break;
        case 3: cout << "Three" << endl; break;
        case 4: cout << "Four" << endl; break;
        case 5: cout << "Five" << endl; break;
        case 6: cout << "Six" << endl; break;
        case 7: cout << "Seven" << endl; break;
        case 8: cout << "Eight" << endl; break;
        case 9: cout << "Nine" << endl; break;
        case 10: cout << "Ten" << endl; break;
        default: cout << "Invalid Number" << endl;
    }
    cout << "Philip Pesic 11/10/22" << endl;
    return 0;
}
