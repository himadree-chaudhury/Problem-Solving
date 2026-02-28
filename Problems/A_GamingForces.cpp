#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int min_cast = 0;
        int ones = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                ones++;
            }
        }
        if (ones % 2 == 0)
        {
            min_cast = ones / 2;
        }
        else
        {
            min_cast = ones / 2 + 1;
        }
        min_cast += (n - ones);
        cout << min_cast << endl;
    }
    return 0;
}