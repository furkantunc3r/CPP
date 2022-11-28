#ifndef MIN_HPP
#define MIN_HPP

template <typename T>
T min(T x, T y)
{
    if (x > y)
        return y;
    else if (x == y)
        return y;
    else
        return x;
}

#endif