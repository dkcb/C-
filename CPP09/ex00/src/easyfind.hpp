#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>
typename T::iterator easyfind (T& container, int nb){
    typename T::iterator result = std::find(container.begin(), container.end(), nb);
    if(result == container.end()){
        throw std::runtime_error("Value not found!");
    }
    return (result);
};

#endif