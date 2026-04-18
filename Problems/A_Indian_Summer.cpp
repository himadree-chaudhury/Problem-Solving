#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<pair<string, string>, bool> bouquet;
    for (int i = 0; i < n; i++)
    {
        string tree, leaf;
        cin >> tree >> leaf;
        bouquet[{tree, leaf}] = true;
    }

    cout << bouquet.size() << endl;

    return 0;
}