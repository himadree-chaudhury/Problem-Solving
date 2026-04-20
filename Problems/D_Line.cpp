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
        int line_length;
        cin >> line_length;
        string direction;
        cin >> direction;

        long long max_count = 0;
        vector<long long> max_count_gain;

        for (int i = 0; i < line_length; i++)
        {
            char dir = direction[i];
            if (dir == 'L')
            {
                max_count += i;
                long long reverse_direction_count = line_length - i - 1;
                long long gain = reverse_direction_count - i;
                if (gain > 0)
                    max_count_gain.push_back(gain);
            }
            else
            {
                max_count += line_length - i - 1;
                long long reverse_direction_count = i;
                long long gain = reverse_direction_count - (line_length - i - 1);
                if (gain > 0)
                    max_count_gain.push_back(gain);
            }
        }

        sort(max_count_gain.begin(), max_count_gain.end(), greater<long long>());
        for (int k = 0; k < line_length; k++)
        {
            if (k < max_count_gain.size())
            {
                max_count += max_count_gain[k];
                cout << max_count << " ";
            }
            else
                cout << max_count << " ";
        }
        cout << endl;
    }
    return 0;
}