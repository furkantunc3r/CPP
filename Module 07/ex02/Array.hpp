#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array
{
private:
    T *mArray;
    int _size;
public:
    Array() : mArray(NULL), _size(0) {};
    Array(int n) : mArray(new T[n]), _size(n)
    {
        for (int i = 0; i < n; i++)
            this->mArray[i] = T();
    }
    Array(Array const &src)
    {
        this->_size = src.size();
        this->mArray = new T[this->_size];
        for (int i = 0; i < src._size; i++)
            this->mArray[i] = src.mArray[i];
    }
    Array &operator=(Array const &src) const
    {
        this->_size = src._size();
        this->mArray = new T[this->_size];
        for (int i = 0; i < src._size; i++)
            this->mArray[i] = src.mArray[i];
    }
    ~Array() { delete[] this->mArray; }

    T &operator[](int i) const
    {
        if (i >= this->_size)
            throw std::out_of_range("No such element!");
        return this->mArray[i];
    }
    int size() const { return this->_size; }
};

#endif