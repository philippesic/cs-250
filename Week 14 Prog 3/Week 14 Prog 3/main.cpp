//
//  main.cpp
//  Week 14 Prog 3
//
//  Created by Pippo Pesic on 11/17/22.
//

#include <iostream>
#include <string>
using namespace std;

class Animal {
    string animalName;
    string sound;
public:
    Animal(string n, string s) {
        animalName = n;
        sound = s;
    }
    virtual void animalSound() {
        cout << animalName << " says " << sound << endl;
    };
};

class Cat : public Animal {
public:
    Cat () : Animal("cat", "meow") {}
};

class Dog : public Animal {
public:
    Dog () : Animal("dog", "bark") {}
};

class Elephant : public Animal {
public:
    Elephant () : Animal("elephant", "squeal") {}
};

class Mouse : public Animal {
public:
    Mouse () : Animal("mouse", "squeak") {}
};

int main() {
    char animal;
    Cat c1;
    Dog d1;
    Elephant e1;
    Mouse m1;
    
    cout << "Select an Animal (C, D, E, M) - ";
    cin >> animal;
    
    switch (animal) {
        case 'C':
            c1.animalSound();
            break;
        case 'D':
            d1.animalSound();
            break;
        case 'E':
            e1.animalSound();
            break;
        case 'M':
            m1.animalSound();
            break;
        default:
            cout << "Invalid Animal" << endl;
    }
    cout << "Philip Pesic 11/20/22" << endl;
    return 0;
}
