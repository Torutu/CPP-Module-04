#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat();
    ~Cat();

    // Member Functions
    void makeSound() const override;
};

#endif
