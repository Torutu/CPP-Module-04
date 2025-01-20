#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
    std::string type;

public:
    // Constructors and Destructor
    Animal();
    virtual ~Animal();

    // Copy Constructor and Assignment Operator
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);

    // Member Functions
    virtual void makeSound() const;
    std::string getType() const;
};

#endif
