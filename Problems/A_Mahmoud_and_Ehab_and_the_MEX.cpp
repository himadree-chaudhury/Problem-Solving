#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    bool found[101] = {false};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        found[a[i]] = true;
    }

    int operations = 0;

    for (int i = 0; i < x; i++)
    {
        if (!found[i])
            operations++;
    }
    if (found[x])
        operations++;
    cout << operations << endl;
    return 0;
}