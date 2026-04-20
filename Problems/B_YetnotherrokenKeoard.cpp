#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string keys;
        cin >> keys;

        vector<pair<char, int>> upperKeys, lowerKeys;
        for (int i = 0; i < keys.length(); i++)
        {
            int key = (int)keys[i];

            if (key == 66)
            {
                if (!upperKeys.empty())
                    upperKeys.pop_back();
            }
            else if (key == 98)
            {
                if (!lowerKeys.empty())
                    lowerKeys.pop_back();
            }
            else if (65 <= key && key <= 90)
            {
                upperKeys.emplace_back((char)key, i);
            }
            else if (97 <= key && key <= 122)
            {
                lowerKeys.emplace_back((char)key, i);
            }
        }

        upperKeys.insert(upperKeys.end(), lowerKeys.begin(), lowerKeys.end());
        sort(upperKeys.begin(), upperKeys.end(), [](const pair<char, int> &a, const pair<char, int> &b)
             { return a.second < b.second; });

        for (auto [letter, _] : upperKeys)
        {
            cout << letter;
        }
        cout << endl;
    }
    return 0;
}