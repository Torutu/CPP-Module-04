#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat created!" << std::endl;
}

Cat::Cat(const Cat& other) {
    type = other.type;
    std::cout << "Cat copied!" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "Cat assigned!" << std::endl;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destroyed!" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow meow!" << std::endl;
}
