#include <iostream>

using namespace std;

// Base class
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating." << endl;
    }

    void sleep()
    {
        cout << "Animal is sleeping." << endl;
    }
};

// Derived class inheriting from Animal
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking." << endl;
    }
};

int main()
{
    // Create an instance of the derived class
    Dog myDog;

    // Accessing base class methods
    myDog.eat();
    myDog.sleep();

    // Accessing derived class method
    myDog.bark();

    return 0;
}
