#include "Data.hpp"
#include <stdint.h>
#include <iostream>

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    Data p;
    p.data = 123;
    std::cout << &p << std::endl;
    std::cout << deserialize(serialize(&p)) << std::endl;
    std::cout << p.data << std::endl;
    std::cout << deserialize(serialize(&p))->data << std::endl;
    return 0;
}