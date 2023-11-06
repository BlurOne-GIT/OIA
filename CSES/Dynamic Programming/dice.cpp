#include <iostream>
#include <vector>

using namespace std;

int n;
vector<unsigned long long> m;
const unsigned long long modulo = 1000000007uLL;

unsigned long long solve(int x);

int main()
{
    cin >> n;
    
    m = vector<unsigned long long>(n+1, 0uLL);

    cout << solve(n);
}

unsigned long long solve(int x)
{
    if (x < 0)
        return 0uLL;
    else if (x == 0)
        return 1uLL;
    else if (m[x] == 0)
    {
        m[x] = solve(x-1) + solve(x-2) + solve(x-3) + solve(x-4) + solve(x-5) + solve(x-6);
        m[x] %= modulo;
    }


    return m[x];
}