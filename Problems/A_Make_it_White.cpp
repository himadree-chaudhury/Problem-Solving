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
        string colors;
        cin >> colors;

        int first_black_pos = colors.find('B');
        int last_black_pos = colors.rfind('B');
        if (first_black_pos == -1)
        {
            cout << 0 << endl;
            continue;
        }
        int white_count = last_black_pos - first_black_pos + 1;
        cout << white_count << endl;
    }

    return 0;
}