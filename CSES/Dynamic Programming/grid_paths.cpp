#include <iostream>
#include <vector>

using namespace std;

int n;
vector<string> nn;
vector<vector<long long>> m;
const long long modulo = 1000000007;

int main()
{
    cin >> n;
    nn = vector<string>(n);
    m = vector<vector<long long>>(n+1, vector<long long>(n+1));
    for (int i = 0; i < n; ++i)
        cin >> nn[i];
    m[n-1][n] = 1ll;

    for (int x = n-1; x >= 0; --x)
        for (int y = n-1; y >= 0; --y)
        {
            m[x][y] = nn[x][y] != '*' ? m[x+1][y] + m[x][y+1] : 0ll;
            m[x][y] %= modulo;
        }
    
    cout << m[0][0];
}