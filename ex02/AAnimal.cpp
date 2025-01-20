#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
    //std::cout << "AAnimal created!" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : type(other.type) {
    std::cout << "AAnimal copied!" << std::endl;
}

AAnimal::~AAnimal() {
    //std::cout << "AAnimal destroyed!" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "AAnimal assigned!" << std::endl;
    return *this;
}

std::string AAnimal::getType() const {
    return type;
}
