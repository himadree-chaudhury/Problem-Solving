#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    float total_time = t + 0.5;
    int current_time = a;
    int count = 0;
    for (int i = 1; i <= t; i++)
    {
        if (current_time > total_time)
        {
            break;
        }
        else
        {
            count = b * i;
            current_time = a * (i + 1);
        }
    }
    cout << count << endl;
    return 0;
}