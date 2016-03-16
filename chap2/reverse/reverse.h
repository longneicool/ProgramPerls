#ifndef REVERSE
#define REVERSE

template<typename T>
void swap(T& t1, T& t2)
{
    T tmp = t1;
    t1 = t2;
    t2 = tmp;
}

template<typename T, unsigned N>
void reverse(T (&array)[N], unsigned begin, unsigned end)
{
    unsigned i = 0;
    while( i != (end - begin + 1) / 2)
    {
        swap(array[begin + i], array[end - i]);
        i++;
    }
}

template<typename T, unsigned N>
void route(T (&array)[N], unsigned num)
{
    num = num % N;
    reverse(array, 0, num - 1);
    reverse(array, num, N - 1);
    reverse(array, 0, N - 1);
}



#endif // REVERSE

