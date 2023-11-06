#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int n, xi;
vector<long long> m;
vector<int> coins;
const long long modulo = 1000000007uLL;
string inputLine;

//long long solve(int x);

int main()
{
    cin >> n >> xi;
    m = vector<long long>(xi+1);
    m[0] = 1LL;

    cin.ignore(32767, '\n');
    getline(cin, inputLine);
    istringstream stream(inputLine);
    int temp;
    while (stream >> temp)
        coins.push_back(temp);

    for (int i = 1; i <= xi; ++i)
        for (auto c : coins)
        {
            if (i-c < 0) continue;
            m[i] += m[i-c];
            m[i] %= modulo;
        }

    //cout << solve(xi);
    cout << m[xi];
}

/*
long long solve(int x)
{
    if (x < 0)
        return 0LL;

    if (m[x] == 0LL)
    {
        for (auto c : coins)
        {
            m[x] += solve(x-c);
            m[x] %= modulo;
        }
    }

    return m[x];
}
*/
