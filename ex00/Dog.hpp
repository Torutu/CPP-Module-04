#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    ~Dog();

    // Member Functions
    void makeSound() const override;
};

#endif
