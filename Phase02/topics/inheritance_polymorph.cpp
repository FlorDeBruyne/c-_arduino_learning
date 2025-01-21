#include <iostream>
#include <string>

// Base class
class Animal {
public:
    // Virtual function to demonstrate polymorphism
    virtual void makeSound() const {
        std::cout << "Some generic animal sound" << std::endl;
    }

    // Non-virtual function
    void sleep() const {
        std::cout << "Animal is sleeping" << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Overriding the virtual function
    void makeSound() const override {
        std::cout << "Woof! Woof!" << std::endl;
    }

    // New function specific to Dog
    void fetch() const {
        std::cout << "Dog is fetching the ball" << std::endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    // Overriding the virtual function
    void makeSound() const override {
        std::cout << "Meow! Meow!" << std::endl;
    }

    // New function specific to Cat
    void climb() const {
        std::cout << "Cat is climbing the tree" << std::endl;
    }
};

int main() {
    // Creating objects of derived classes
    Dog myDog;
    Cat myCat;

    // Pointers to base class
    Animal* animalPtr1 = &myDog;
    Animal* animalPtr2 = &myCat;

    // Demonstrating polymorphism
    animalPtr1->makeSound();
    animalPtr2->makeSound();

    // Calling non-virtual function
    animalPtr1->sleep();
    animalPtr2->sleep();

    // Calling derived class specific functions
    myDog.fetch();
    myCat.climb();

    return 0;
}