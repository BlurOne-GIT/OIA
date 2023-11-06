#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int n, x;
vector<int> h, s;

string inputLine;

int main()
{
    cin >> n >> x;

    cin.ignore(32767, '\n');
    getline(cin, inputLine);
    istringstream stream(inputLine);
    int temp;
    while (stream >> temp)
        h.push_back(temp);

    cin.ignore(32767, '\n');
    getline(cin, inputLine);
    istringstream stream(inputLine);
    int temp;
    while (stream >> temp)
        s.push_back(temp);

    
}