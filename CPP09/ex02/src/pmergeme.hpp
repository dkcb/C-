#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <vector>
#include <deque>

class PmergeMe {
public:
    PmergeMe();  // Default constructor
    ~PmergeMe(); // Destructor

    static void sortSequence(std::vector<int>& sequence); // Sorts the positive integer sequence
};

#endif // PMERGE_ME_HPP
