#ifndef MAX_HPP
#define MAX_HPP

template <typename T>
T max(T x, T y)
{
    if (x > y)
        return x;
    else if (x == y)
        return y;
    else
        return y;
}

#endif