#include <iostream>

using namespace std;

int x, y, i;

int main()
{
    cin >> x >> y;
    while (x != y)
    {
        if (x > y)
            x -= y;
        else
            y -= x;
        ++i;
    }

    cout << i;
}