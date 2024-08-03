#include <iostream>
#include "Array.hpp"

int main (){
    Array <int> b;
    Array <int> a(5);

    try {
        for (unsigned int i = 0; i < a.size(); i++)
            a[i] = i;
        for (unsigned int i = 0; i < a.size(); i++)
            std::cout << a[i];
        std::cout << std::endl;
        std::cout << a[5];
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}