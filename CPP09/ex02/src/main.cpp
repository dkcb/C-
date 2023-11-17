#include "pmergeme.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <ctime>

// int main(int argc, char **argv) {
int main() {
    // Create an instance of PmergeMe
    PmergeMe pmergeMe;

    // Example sequence with at least 3000 different integers
    std::vector<int> sequence;// = { 2, 1, 8, 5 };
    std::srand(std::time(0)); // Seed for random number generation

    for (int i = 0; i < 30; ++i) {
        sequence.push_back(std::rand() % 100); // Assuming integers in the range [0, 99]
    }
    std::cout << "Sequence size: " << sequence.size() << "\n";

    // Display the unsorted sequence
    std::cout << "Unsorted Sequence:" << std::endl;
    for (const auto& num : sequence) {
        std::cout << num << " ";
    }
    // Sort the sequence using PmergeMe
    pmergeMe.sortSequence(sequence);

    // Display the sorted sequence
    std::cout << "Sorted Sequence:" << std::endl;
    for (const auto& num : sequence) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
