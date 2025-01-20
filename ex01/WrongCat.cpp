#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat created!" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destroyed!" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Meow? (Wrong)" << std::endl;
}
