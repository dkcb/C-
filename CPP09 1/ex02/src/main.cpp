#include <iostream>
#include "MutantStack.hpp"

int main() {
    MutantStack<int> mutantStack;

    mutantStack.push(1);
    mutantStack.push(2);
    mutantStack.push(3);
    mutantStack.push(4);
    mutantStack.push(5);

    std::cout << "MutantStack contents: ";
    for (MutantStack<int>::iterator it = mutantStack.begin(); it != mutantStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}