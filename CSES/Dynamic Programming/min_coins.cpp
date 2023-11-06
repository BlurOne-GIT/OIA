#include <iostream>
#include <vector>
#include <sstream>
#define INFINITY 2147483646

using namespace std;

int n, x;
vector<int> coins, m;
string inputLine;

int solve(int xs);

int main()
{
    cin >> n >> x;

    if (x <= 0 || n <= 0)
    {
        cout << -1;
        return 0;
    }

    m = vector<int>(x+1);

    cin.ignore(32767, '\n');
    getline(cin, inputLine);
    istringstream stream(inputLine);
    int temp;
    while (stream >> temp)
        coins.push_back(temp);

    int s = solve(x);
    if (s == INFINITY)
        s = -1;

    cout << s;
}

int solve(int xs)
{
    if (xs < 0) return INFINITY;
    if (xs == 0) return 0;
    if (m[xs] == 0)
    {
        m[xs] = INFINITY;
        for (auto c : coins)
            m[xs] = min(m[xs], solve(xs-c)+1);
    }
    return m[xs];
}
