#include <iostream>
#include <vector>

using namespace std;
//Base class
class Animal {
public:
    virtual void speak() {
        cout << "Some sound\n" << endl;
    }
    virtual ~Animal() {
        cout << "Animal cleaning\n" << endl;
    }   
};
//
class Dog : public Animal {
public:
    void speak() {
        cout << "Woof\n" << endl;
    }
    ~Dog() {
        cout << "Dog cleaning\n" << endl;
    }   
};

class Cat : public Animal {
public:
    void speak() {
        cout << "Meow\n" << endl;
    }
    ~Cat() {
        cout << "Cat cleaning\n" << endl;
    }   
};

int main() {
    vector<Animal*>pets;
   pets.push_back(new Dog());
   pets.push_back(new Cat());

    for (Animal* pet : pets) {
        pet->speak();
    }
// 
Animal& d = *pets[0];
Animal& c = *pets[1];
d.speak();
c.speak();
//
Animal ad = *pets[0];
Animal ac = *pets[1];
ad.speak();
ac.speak();
//
    for (Animal* pet : pets) {
        delete pet;
    }


    return 0;
}