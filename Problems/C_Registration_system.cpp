#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> names;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        if (names.find(name) == names.end())
        {
            names[name] = 1;
            cout << "OK" << endl;
        }
        else
        {
            cout << name << names[name] << endl;
            names[name]++;
        }
    }
    return 0;
}