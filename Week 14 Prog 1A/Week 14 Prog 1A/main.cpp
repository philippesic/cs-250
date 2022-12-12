//
//  main.cpp
//  Week 14 Prog 1A
//
//  Created by Pippo Pesic on 11/17/22.
//

#include <iostream>
using namespace std;

class Enemy {
protected:
    int attackPower;
public:
    void setAttackPower(int a) {
        attackPower = a;
    }
};

class Ninja : public Enemy {
public:
    void attack() {
        cout << "I am a Ninja, Ninja Chop! - " << attackPower << endl;
    }
};

class Monster : public Enemy {
public:
    void attack() {
        cout << "Monster must eat you! - " << attackPower << endl;
    }
};

int main() {
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    enemy1->setAttackPower(29);
    enemy2->setAttackPower(99);
    n.attack();
    m.attack();
    cout << "Philip Pesic 11/20/22" << endl;
    return 0;
}
