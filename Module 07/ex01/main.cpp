#include "iter.hpp"
#include <iostream>

int byZero(int x)
{
    return x *= 0;
}

int main()
{
    int arr[] = {0,1,2,3,4};
    char arr1[] = {'a', 'b', 'c'};

    iter(arr , sizeof(arr)/sizeof(arr[0]), byZero);
    iter(arr1, sizeof(arr1)/sizeof(arr1[0]), byZero);

    for (size_t i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++)
        std::cout << arr[i] << std::endl;
    for (size_t i = 0 ; i < sizeof(arr1)/sizeof(arr1[0]) ; i++)
        std::cout << (char)(arr1[i] + 33) << std::endl;
    return 0;
}