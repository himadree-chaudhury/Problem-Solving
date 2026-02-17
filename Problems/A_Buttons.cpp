#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;
    if (a > b)
    {
        sum += a;
        a -= 1;
    }
    else
    {
        sum += b;
        b -= 1;
    }
    if (a > b)
    {
        sum += a;
        a -= 1;
    }
    else
    {
        sum += b;
        b -= 1;
    }
    cout << sum << endl;
    return 0;
}