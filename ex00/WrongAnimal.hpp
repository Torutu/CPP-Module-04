#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal &operator=(const WrongAnimal &other);
    WrongAnimal(const WrongAnimal &other);
    ~WrongAnimal();

    void makeSound() const; // Not virtual
    std::string getType() const;
};

#endif
