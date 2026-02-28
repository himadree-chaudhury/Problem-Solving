#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans;
    for (int i = 1; i <= a; i++)
    {
        ans = c * i;
        if (a <= ans && ans <= b)
        {
            cout << ans << endl;
            break;
        }
        if (ans > b)
        {
            cout << -1 << endl;
            break;
        }
    }
    return 0;
}