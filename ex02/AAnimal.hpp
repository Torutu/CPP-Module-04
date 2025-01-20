#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
protected:
    std::string type;

public:
    AAnimal();
    AAnimal(const AAnimal& other);
    virtual ~AAnimal();

    AAnimal& operator=(const AAnimal& other);

    std::string getType() const;

    // Pure virtual function
    virtual void makeSound() const = 0;
};

#endif
