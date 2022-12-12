//
//  main.cpp
//  Week 17 Prog
//
//  Created by Pippo Pesic on 12/9/22.
//

//This program is an example of the factory method because we create classes derived from Pizza, and then create the objects in a function outside of the class. The main function will not create objects, but rather passes the type of pizza to the create function in order to create the function.

#include <stdexcept>
#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Pizza {
public:
    virtual double getPrice() const = 0;
    virtual ~Pizza() { cout << "Destructor called" << endl; }
};

class PepperoniOlivePizza : public Pizza {
public:
    virtual double getPrice() const { return 8.50; };
    virtual ~PepperoniOlivePizza() {};
};

class DeluxeChickenPizza : public Pizza {
public:
    virtual double getPrice() const { return 10.50; };
    virtual ~DeluxeChickenPizza() {};
};

class HawaiianPizza : public Pizza {
public:
    virtual double getPrice() const { return 11.50; };
    virtual ~HawaiianPizza() {};
};

class CheesePizza : public Pizza {
public:
    virtual double getPrice() const { return 7.50; };
    virtual ~CheesePizza() {};
};

class PizzaFactory {
public:
    enum PizzaType {
        PepperoniOlive,
        DeluxeChicken,
        Hawaiian,
        Cheese
    };
    
    
//Creates a new pizza
    static unique_ptr<Pizza> createPizza(PizzaType pizzaType) {
        switch (pizzaType) {
        case PepperoniOlive:  return make_unique<PepperoniOlivePizza>();
        case DeluxeChicken:  return make_unique<DeluxeChickenPizza>();
        case Hawaiian:  return make_unique<HawaiianPizza>();
        case Cheese:    return make_unique<CheesePizza>();
        }
        throw "invalid pizza type.";
    }
};

// Instantiate all available pizzas and print their prices, and names
void pizza_information(PizzaFactory::PizzaType pizzatype)
{
    string PizzaNames[4] = {"PepperoniOlive", "DeluxeChicken", "Hawaiian", "Cheese"};

    unique_ptr<Pizza> pizza = PizzaFactory::createPizza(pizzatype);
    cout << "Price of " << PizzaNames[pizzatype] << " is " << pizza->getPrice() << std::endl;
}

//Call pizza_information for each pizza type
int main() {
    pizza_information(PizzaFactory::PepperoniOlive);
    pizza_information(PizzaFactory::DeluxeChicken);
    pizza_information(PizzaFactory::Hawaiian);
    pizza_information(PizzaFactory::Cheese);
    cout << "Philip Pesic 12/11/22" << endl;
}
