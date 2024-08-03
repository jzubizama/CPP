#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <string>
#include <stdint.h>

typedef struct s_Data
{
    std::string str;
} Data;

class Serialization
{
    private:
        Serialization();
        Serialization(Serialization const &data);
        Serialization &operator=(Serialization const &data);
    public:
        ~Serialization();
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif