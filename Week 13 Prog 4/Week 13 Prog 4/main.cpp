//
//  main.cpp
//  Week 13 Prog 4
//
//  Created by Pippo Pesic on 11/10/22.
//

#include <iostream>
using namespace std;
int main()
{
  int age = 0;
  cout << "Enter age to see ticket price: ";
  cin >> age;
    switch (age) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: cout << "$0.00" << endl; break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12: cout << "$10.00" << endl; break;
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26: cout << "$18.00" << endl; break;
        default: cout << "$15.00" << endl;
    }
    cout << "Philip Pesic 11/10/22" << endl;
    return 0;
  }

