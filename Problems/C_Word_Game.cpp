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
        int n;
        cin >> n;
        map<string, vector<int>> word_map;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string word;
                cin >> word;
                word_map[word].push_back(i);
            }
        }
        vector<int> personal_count(4, 0);
        for (auto [word, persons] : word_map)
        {
            if (persons.size() == 1)
            {
                personal_count[persons[0]] += 3;
            }
            else if (persons.size() == 2)
            {
                personal_count[persons[0]]++;
                personal_count[persons[1]]++;
            }
        }
        cout << personal_count[1] << " " << personal_count[2] << " " << personal_count[3] << endl;
    }
    return 0;
}