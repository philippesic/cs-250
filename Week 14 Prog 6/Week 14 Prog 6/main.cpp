//
//  main.cpp
//  Week 14 Prog 6
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
    
    Animal **pAnimal = new Animal *[4];
    
    pAnimal[0] = new Cat;
    pAnimal[1] = new Dog;
    pAnimal[2] = new Elephant;
    pAnimal[3] = new Mouse;
    
    for (int i = 0; i < 4; i++) {
        pAnimal[i]->animalSound();
    }
    
    cout << "Philip Pesic 11/20/22" << endl;
    return 0;
}
