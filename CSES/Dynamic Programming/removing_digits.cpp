#include <iostream>

using namespace std;

int x;
int i = 0;

int main()
{
    cin >> x;

    while (x > 0)
    {
        string s = to_string(x);
        int m = 0;
        for (auto c : s)
        {
            m = max(c-48, m);
            if (c - 48 == 9)
                break;
        }
        x -= m;

        i++;
    }

    cout << i;
}