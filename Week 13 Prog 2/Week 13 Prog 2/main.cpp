//
//  main.cpp
//  Week 10 Prog 2
//
//  Created by Pippo Pesic on 11/10/22.
//

#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "Choose Option:" << endl;
    cout << "Single Player (1)" << endl;
    cout << "Cpu (2)" << endl;
    cout << "Split Screen (3)" << endl;
    cout << "Online Multiplayer (4)" << endl;
    cout << "Quit Game (5)" << endl;
    cin >> choice;
    switch (choice) {
        case 1: cout << "You chose to play Single Player" << endl; break;
        case 2: cout << "You chose to Play against a Computer" << endl; break;
        case 3: cout << "You chose to play Split Screen" << endl; break;
        case 4: cout << "You chose to Play Online" << endl; break;
        case 5: cout << "You chose to Quit Game" << endl; break;
        default: cout << "Invalid Choice" << endl;
    }
    cout << "Philip Pesic 11/10/22" << endl;
    return 0;
}
