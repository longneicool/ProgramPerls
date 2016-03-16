#ifndef ROUTE_CHAR
#define ROUTE_CHAR

#include <iostream>

template<typename T>
void route(T *array, unsigned N, unsigned num)
{
    num = num % N;
    if(0 == num)
        return;

    for(unsigned reminder = 0; reminder < num; reminder++)
    {
        T tmp = array[reminder];

        unsigned curPos = reminder;
        while(curPos + num < N)
        {
            array[curPos] = array[curPos + num];
            curPos += num;
        }

        array[curPos] = tmp;
    }
}

#endif // ROUTE_CHAR

