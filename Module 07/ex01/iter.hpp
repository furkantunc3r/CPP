#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename I, typename F>
void iter(T &x, I y, F &z)
{
    for (unsigned long int i = 0 ; i < y ; i++)
        x[i] = z(x[i]);
}

#endif