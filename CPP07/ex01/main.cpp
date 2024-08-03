#include "iter.hpp"
#include <iostream>

template <typename T>
void print(T const &x){
    std::cout << x << " ";
}


int main (){
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, print);
    std::cout << std::endl;
    iter(arr, 5, print);
    std::cout << std::endl;
    return 0;
}


















/* class Awesome {
    private:
        int _n;
    public:
        int get( void ) const { return this->_n; }
        Awesome() : _n(42) {}
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5];

    iter( tab, 5, print );
    iter( tab2, 5, print );

    return 0;
} */