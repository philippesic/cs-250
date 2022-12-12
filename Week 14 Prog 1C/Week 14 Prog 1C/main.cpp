//
//  main.cpp
//  Week 14 Prog 1C
//
//  Created by Pippo Pesic on 11/17/22.
//

#include <iostream>
using namespace std;

class Enemy {
public:
    virtual void attack() = 0;
};

class Ninja : public Enemy {
public:
    void attack() {
        cout << "I am a Ninja, Ninja Chop!" << endl;
    }
};

class Monster : public Enemy {
public:
    void attack() {
        cout << "Monster must eat you!" << endl;
    }
};

int main() {
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    enemy1->attack();
    enemy2->attack();
    cout << "Philip Pesic 11/20/22" << endl;
    return 0;
}
