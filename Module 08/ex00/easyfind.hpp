#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>

template <typename T>
int easyfind(T x, int N)
{
    (void)N;
    typename T::iterator itr;
    if ((itr = find(x.begin(), x.end(), N)) != x.end())
        return std::distance(x.begin(), itr) + 1;
    throw std::runtime_error("no such number!");
}

#endif