#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    using std::stack<T>::c;

    iterator begin() {
        return c.begin();
    }

    iterator end() {
        return c.end();
    }

    const_iterator begin() const {
        return c.begin();
    }

    const_iterator end() const {
        return c.end();
    }
};

#endif // MUTANTSTACK_HPP