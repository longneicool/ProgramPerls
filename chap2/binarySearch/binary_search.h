#ifndef BINARY_SEARCH
#define BINARY_SEARCH

#include <iostream>

template<unsigned N>
unsigned binarySearch(unsigned (&array)[N])
{
    unsigned start = 0, end = N - 1;
    unsigned m = 0;
    unsigned count = 0;

    while(start != end)
    {
        count++;
        m = (start + end) / 2;
        if(array[m] == m)
        {
            start = m + 1;
        }
        else
        {
            end = m;
        }
    }

    std::cout << count << std::endl;
    return array[m] + 1;
}

#endif // BINARY_SEARCH

