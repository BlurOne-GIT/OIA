#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int n;
long long score;
vector<long long> game;

string inputLine;

int main()
{
    cin >> n;
    cin.ignore(32767, '\n');
    getline(cin, inputLine);
    istringstream stream(inputLine);
    int temp;
    while (stream >> temp)
        game.push_back(temp);

    for (int i = 0; i < n; i++)
    {
        long long m = max(game[0], game.back());
        if (i % 2 == 0) score += m;
        if (m == game[0])
            game.erase(game.begin());
        else
            game.pop_back();
    }
    
    cout << score;
}