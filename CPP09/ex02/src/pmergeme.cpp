#include "pmergeme.hpp"

// Constructor
PmergeMe::PmergeMe() {}

// Destructor
PmergeMe::~PmergeMe() {}

// Function to sort a positive integer sequence using merge-insert sort
void PmergeMe::sortSequence(std::vector<int>& sequence) {
    // Check if sequence is not empty
    if (sequence.empty()) {
        // std::cerr << "Error: Empty sequence provided." << std::endl;
        // return;
    }

    // Check if sequence has at least 3000 elements
    if (sequence.size() < 1) {
        // std::cout << "s";
        // std::cerr << "Error: Sequence must have at least 1 element." << std::endl;
        // return;
    }

    // Split the sequence into two halves
    // std::cout << "Sequence size: " << sequence.size() << "\n";

    size_t middle = sequence.size() / 2;
    std::cout << "Middle: " << middle << std::endl;
    // std::abort();
    std::vector<int> left(sequence.begin(), sequence.begin() + middle);
    std::vector<int> right(sequence.begin() + middle, sequence.end());

    if (sequence.size() < 1) {
        merge(left, right, sequence);
        return ;
    }
    // Recursively sort each half
    sortSequence(left);
    sortSequence(right);

    // Merge the sorted halves
}

// Helper function for merge step of merge-sort
void PmergeMe::merge(std::vector<int>& left, std::vector<int>& right, std::vector<int>& output) {
    size_t i = 0, j = 0, k = 0;

    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            output[k] = left[i];
            ++i;
        } else {
            output[k] = right[j];
            ++j;
        }
        ++k;
    }

    // Copy remaining elements of left (if any)
    while (i < left.size()) {
        output[k] = left[i];
        ++i;
        ++k;
    }

    // Copy remaining elements of right (if any)
    while (j < right.size()) {
        output[k] = right[j];
        ++j;
        ++k;
    }
}

// Helper function for insert step of insert-sort
void PmergeMe::insert(std::vector<int>& sequence, int position) {
    int key = sequence[position];
    int i = position - 1;

    // Move elements greater than key to one position ahead of their current position
    while (i >= 0 && sequence[i] > key) {
        sequence[i + 1] = sequence[i];
        --i;
    }

    // Insert the key at its correct position
    sequence[i + 1] = key;
}
