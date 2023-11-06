#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int n, x;
vector<vector<long long>> m;
vector<int> coins;
const long long modulo = 1000000007uLL;
string inputLine;

int main()
{
    cin >> n >> x;
    m = vector<vector<long long>>(n+1, vector<long long>(x+1));
    m[0][0] = 1LL;

    cin.ignore(32767, '\n');
    getline(cin, inputLine);
    istringstream stream(inputLine);
    int temp;
    while (stream >> temp)
        coins.push_back(temp);

    for (int i = 1; i <= n; ++i)
        for (int j = 0; j <= x; ++j)
        {
            m[i][j] = m[i - 1][j];
            if (j >= coins[i-1]) m[i][j] += m[i][j - coins[i - 1]];
            m[i][j] %= modulo;
        }

    //cout << solve(xi);
    cout << m[n][x];
}
