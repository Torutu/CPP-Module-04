#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const int arraySize = 4;
    Animal* animals[arraySize];

    // Create half Dogs and half Cats
    for (int i = 0; i < arraySize / 2; i++) {
        animals[i] = new Dog();
    }
    for (int i = arraySize / 2; i < arraySize; i++) {
        animals[i] = new Cat();
    }

    // Test deep copy
    Dog originalDog;
    originalDog.setBrainIdea(0, "Chase the ball");
    Dog copiedDog = originalDog;
    copiedDog.setBrainIdea(0, "Sleep all day");

    std::cout << "Original Dog Idea: " << originalDog.getBrainIdea(0) << std::endl;
    std::cout << "Copied Dog Idea: " << copiedDog.getBrainIdea(0) << std::endl;

    // Cleanup and memory leak check
    for (int i = 0; i < arraySize; i++) {
        delete animals[i];
    }

    return 0;
}
