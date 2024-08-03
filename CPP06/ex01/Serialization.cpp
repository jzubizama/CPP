#include "Serialization.hpp"

Serialization::Serialization()
{
}

Serialization::Serialization(Serialization const &data)
{
    *this = data;
}

Serialization &Serialization::operator=(Serialization const &data)
{
    (void)data;
    return *this;
}

Serialization::~Serialization()
{
}

uintptr_t Serialization::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serialization::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}
//ptr to ptr or ptr to/from int