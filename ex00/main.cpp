#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    // Correct Polymorphism
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound(); // Cat sound
    dog->makeSound(); // Dog sound
    meta->makeSound(); // Animal sound

    delete meta;
    delete dog;
    delete cat;

    std::cout << "\n--- WrongAnimal Test ---\n" << std::endl;

    // Incorrect Polymorphism
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();

    std::cout << wrongI->getType() << " " << std::endl;
    wrongI->makeSound(); // WrongAnimal sound (not overridden)
    wrongMeta->makeSound(); // WrongAnimal sound

    delete wrongMeta;
    delete wrongI;

    return 0;
}
