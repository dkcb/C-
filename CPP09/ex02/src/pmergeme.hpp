#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe {
public:
    // Constructor
    PmergeMe();

    // Destructor
    ~PmergeMe();

    // Function to sort a positive integer sequence using merge-insert sort
    // Implements the Ford-Johnson algorithm
    // Input: positive integer sequence
    // Output: sorted sequence
    void sortSequence(std::vector<int>& sequence);

private:
    // Helper function for merge step of merge-sort
    // Input: two sorted sub-sequences and output sequence
    // Output: merged sorted sequence
    void merge(std::vector<int>& left, std::vector<int>& right, std::vector<int>& output);

    // Helper function for insert step of insert-sort
    // Input: sequence and position to insert
    // Output: sorted sequence
    void insert(std::vector<int>& sequence, int position);
};

#endif // PMERGEME_HPP
