#include "pmergeme.hpp"
#include <iostream>

// Default constructor
PmergeMe::PmergeMe() {}

// Destructor
PmergeMe::~PmergeMe() {}

// Merge function to merge two sorted halves of a sequence
void merge(std::vector<int>& sequence, size_t left, size_t middle, size_t right) {
    std::deque<int> leftHalf(sequence.begin() + left, sequence.begin() + middle + 1);
    std::deque<int> rightHalf(sequence.begin() + middle + 1, sequence.begin() + right + 1);

    size_t i = 0, j = 0, k = left;

    while (i < leftHalf.size() && j < rightHalf.size()) {
        if (leftHalf[i] <= rightHalf[j]) {
            sequence[k] = leftHalf[i];
            ++i;
        } else {
            sequence[k] = rightHalf[j];
            ++j;
        }
        ++k;
    }

    while (i < leftHalf.size()) {
        sequence[k] = leftHalf[i];
        ++i;
        ++k;
    }

    while (j < rightHalf.size()) {
        sequence[k] = rightHalf[j];
        ++j;
        ++k;
    }
}

// Recursive function to perform merge-insert sort
void mergeInsertSort(std::vector<int>& sequence, size_t left, size_t right) {
    if (left < right) {
        size_t middle = left + (right - left) / 2;
        mergeInsertSort(sequence, left, middle);
        mergeInsertSort(sequence, middle + 1, right);
        merge(sequence, left, middle, right);
    }
}

// Sorts the positive integer sequence using merge-insert sort algorithm
void PmergeMe::sortSequence(std::vector<int>& sequence) {
    if (sequence.empty()) {
        std::cerr << "Error: Empty sequence provided.\n";
        return;
    }

    mergeInsertSort(sequence, 0, sequence.size() - 1);
}
