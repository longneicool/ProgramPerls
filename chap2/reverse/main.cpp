#include <iostream>
#include "reverse.h"

using namespace std;

int main()
{
    unsigned array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    route(array, 100);

    for(auto c : array)
        cout << c;

    return 0;
}

