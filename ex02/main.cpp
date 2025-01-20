#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int arraySize = 4;
    AAnimal* animals[arraySize];

    // Create half Dogs and half Cats
    for (int i = 0; i < arraySize / 2; i++) {
        animals[i] = new Dog();
    }
    for (int i = arraySize / 2; i < arraySize; i++) {
        animals[i] = new Cat();
    }

    // Test the functionality
    for (int i = 0; i < arraySize; i++) {
        animals[i]->makeSound();
    }

    // Cleanup and memory leak check
    for (int i = 0; i < arraySize; i++) {
        delete animals[i];
    }

    // Ensure abstract class cannot be instantiated
    // AAnimal* test = new AAnimal(); // This should cause a compile-time error

    return 0;
}
