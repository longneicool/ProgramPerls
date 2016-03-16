#include <iostream>
#include <route_char.h>

using namespace std;

int main()
{
    char array[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};

    route(array,sizeof(array), 3);

    for(auto c : array)
    {
        cout << c;
    }

    cout << endl;

    return 0;
}

