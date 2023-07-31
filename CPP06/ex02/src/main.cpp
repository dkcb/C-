#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate() {
    int randomNumber = std::rand() % 3; // Generate a random number between 0 and 2
    
    if (randomNumber == 0)
        return new A();
    else if (randomNumber == 1)
        return new B();
    else
        return new C();
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown" << std::endl;
}

void identify(Base& p) {
    // Call the overloaded identify(Base* p) function using the address of the reference
    identify(&p);
}

int main() {
// Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    Base* obj1 = generate();
    Base* obj2 = generate();
    Base* obj3 = generate();

    identify(obj1);
    identify(obj2);
    identify(obj3);

    // Clean up memory to avoid memory leaks
    delete obj1;
    delete obj2;
    delete obj3;

    return 0;
}