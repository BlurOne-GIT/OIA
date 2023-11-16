#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int n, cm;
vector<int> x, caps;

int main()
{
    cin >> n;

    string inputLine;
    cin.ignore(32767, '\n');
    getline(cin, inputLine);
    istringstream stream(inputLine);
    int temp;
    while (stream >> temp)
        x.push_back(temp);

    caps.push_back(x[0]);

    for (int k = 1; k < n; ++k) {
        if (x[k] == caps[(int)caps.size()-1]) continue;
        if (x[k] > caps[(int)caps.size()-1])
        {
            caps.push_back(x[k]);
            main_continue:
                continue;
        }
        for (int i = (int)caps.size()-1; i > 0; --i) {
            if (x[k] < caps[i] && x[k] > caps[i-1]) {
                caps[i] = x[k];
                goto main_continue;
            }
        }
        if (x[k] < caps[0]) caps[0] = x[k];
    }

    cout << caps.size();
}