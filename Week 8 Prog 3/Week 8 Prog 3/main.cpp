//
//  main.cpp
//  Week 8 Prog 3
//
//  Created by Pippo Pesic on 10/5/22.
//

#include <iostream>
#include <string>
using namespace std;

class person {
    string firstName;
    string lastName;
    int yearOfBirth;
    string nickname;
    int x;
public:
    person() {x = 0;}
    person(int inX) {x = inX;}
    void setFirstName(string inFirstName) {
        firstName = inFirstName;
    }
    string getFirstName() {
        return firstName;
        
    }
    void setLastName(string inLastName) {
        lastName = inLastName;
    }
    string getLastName() {
        return lastName;
        
    }
    void setYearOfBirth(int inYearOfBirth) {
        yearOfBirth = inYearOfBirth;
    }
    int getYearOfBirth() {
        return yearOfBirth;
        
    }
    void setNickname(string inNickname) {
        nickname = inNickname;
    }
    string getNickname() {
        return nickname;
        
    }
};

int main() {
    person P1,P2;
    person* ptrP1 = &P1;
    person* ptrP2 = &P2;
    ptrP1 -> setFirstName("Philip");
    ptrP2 -> setLastName("Pesic");
    cout << "First Name: " << ptrP1 -> getFirstName() << endl;
    cout << "Last Name: " << ptrP2 -> getLastName() << endl;
    cout << "Philip Pesic 10/9/22" << endl;
    return 0;
}
