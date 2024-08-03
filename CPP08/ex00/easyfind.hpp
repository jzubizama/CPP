#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <algorithm>

template <typename T>

void easyfind(T &container, int value){
    typename T::iterator it = std::find(container.begin(), container.end(), value);
        if (it == container.end())
            throw std::exception();
        std::cout << "Value found: " << *it << std::endl;
}

#endif