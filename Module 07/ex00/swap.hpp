#ifndef SWAP_HPP
#define SWAP_HPP

template <typename T>
void swap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

#endif