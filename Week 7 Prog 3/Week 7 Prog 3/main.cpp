//
//  main.cpp
//  Week 7 Prog 3
//
//  Created by Pippo Pesic on 10/2/22.
//

#include <iostream>
#include <string>
using namespace std;

class date {
    int month = 1;
    int day = 1;
    int year = 1900;
public:
    void setMonth(int inMonth) {
        month = inMonth;
    }
    int getMonth() {
        return month;
    }
    void setDay(int inDay) {
        day = inDay;
    }
    int getDay() {
        return day;
    }
    void setYear(int inYear) {
        year = inYear;
    }
    int getYear() {
        return year;
    }
};

class person {
    string firstName;
    string lastName;
    date dob;
public:
    date date1;
    date date2;
    void setFirstName(string inFirst) {
        firstName = inFirst;
    }
    string getFirstName() {
        return firstName;
    }
    void setLastName(string inLast) {
        lastName = inLast;
    }
    string getLastName() {
        return lastName;
    }
};

int main() {
    person person1;
    person person2;
    cout << "Person 1 First Name - " << person1.getFirstName() << endl;
    cout << "Person 1 Last Name - " << person1.getLastName() << endl;
    cout << "Person 1 Month of Birth - " << person1.date1.getMonth() << endl;
    cout << "Person 1 Day of Birth - " << person1.date1.getDay() << endl;
    cout << "Person 1 Year of Birth - " << person1.date1.getYear() << endl;
    person2.setFirstName("Mc");
    person2.setLastName("Lovin");
    person2.date2.setMonth(6);
    person2.date2.setDay(3);
    person2.date2.setYear(1981);
    cout << "Person 2 First Name - " << person2.getFirstName() << endl;
    cout << "Person 2 Last Name - " << person2.getLastName() << endl;
    cout << "Person 2 Month of Birth - " << person2.date2.getMonth() << endl;
    cout << "Person 2 Day of Birth - " << person2.date2.getDay() << endl;
    cout << "Person 2 Year of Birth - " << person2.date2.getYear() << endl;
    
    cout << "Philip Pesic 10/2/22" << endl;
    return 0;
}
