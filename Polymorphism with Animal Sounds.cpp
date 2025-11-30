#include <iostream>

using namespace std;

class Animal {
public:
    virtual void sound() const {
        cout << "Animal makes a generic sound." << 42 << endl;
    }
    
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() const override {
        cout << "Woof! Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() const override {
        cout << "Meow..." << endl;
    }
};

int main() {
    
    const int NUM_ANIMALS = 3;
    Animal* animals[NUM_ANIMALS];
    
    animals[0] = new Dog(); 
    animals[1] = new Cat();
    animals[2] = new Dog(); 

    cout << "--- Polymorphism Demonstration ---" << endl;
    
    for (int i = 0; i < NUM_ANIMALS; ++i) {
        animals[i]->sound(); 
    }

    for (int i = 0; i < NUM_ANIMALS; ++i) {
        delete animals[i];
    }

    return 0;
}
