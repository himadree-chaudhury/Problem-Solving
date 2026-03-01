#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        vector<int> freq(26, 0);
        for (char c : s)
            freq[c - 'a']++;

        int odd_count = 0;
        for (int count : freq)
        {
            if (count % 2 != 0)
                odd_count++;
        }

        if (odd_count - 1 <= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}