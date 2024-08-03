#include <iostream>
#include <cstdlib>
#include "Serialization.hpp"

using std::cout;
using std::cerr;
using std::endl;

int	main(int argc, char **argv)
{
    Data tryal;
    uintptr_t reinterpreted;

    tryal.str = std::string("test");
    reinterpreted = Serialization::serialize(&tryal);

    cout << "OG foo (Data) Address = " << &tryal << endl
         << "str value = " << tryal.str << endl;

    cout << endl;

    cout << "Reinterpreted foo value = " << reinterpreted << endl;
    
    cout << endl;

    Data *deserialized;

    deserialized = Serialization::deserialize(reinterpreted);

    cout << "Deserialized Address = " << deserialized << endl
         << "str value = " << deserialized->str << endl;

    return EXIT_SUCCESS;
}