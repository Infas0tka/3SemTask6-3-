#include <iostream>
#include <map>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    map<string, string> s;
    map<string, string>::iterator it;
    string x, y, z;
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> x;
        cin >> y;
        s[x] = y;
    }
    cin >> z;
    it = s.begin();
    while ((it->first != z) && (it->second != z))
        it++;
    if (it->first == z)
        cout << it->second;
    else
        cout << it->first;
}
