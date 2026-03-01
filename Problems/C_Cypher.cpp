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
        vector<int> initial_code(n);
        for (int i = 0; i < n; i++)
            cin >> initial_code[i];

        for (int i = 0; i < n; i++)
        {
            int moves;
            cin >> moves;
            while (moves--)
            {
                char direction;
                cin >> direction;
                if (direction == 'U')
                {
                    initial_code[i] = (initial_code[i] - 1);
                    if (initial_code[i] > 9)
                        initial_code[i] = 0;
                    else if (initial_code[i] < 0)
                        initial_code[i] = 9;
                }
                else if (direction == 'D')
                {
                    initial_code[i] = (initial_code[i] + 1);
                    if (initial_code[i] > 9)
                        initial_code[i] = 0;
                    else if (initial_code[i] < 0)
                        initial_code[i] = 9;
                }
            }
        }
        for (int i = 0; i < n; i++)
            cout << initial_code[i] << " ";
        cout << endl;
    }

    return 0;
}