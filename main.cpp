#include <iostream>
#include <map>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    map<string, string> s;
    string x, y, z;
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> x;
        cin >> y;
        s[x] = y;
        s[y] = x;
    }
    cin >> z;
    cout << s[z];
}
