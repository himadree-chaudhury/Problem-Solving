#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> cards(n);
    for (int i = 0; i < n; i++)
        cin >> cards[i];
    int sereja_score = 0, dima_score = 0, turn = 1;
    while (!cards.empty())
    {
        if (cards.front() > cards.back())
        {
            if (turn % 2 == 1)
            {
                sereja_score += cards.front();
                cards.pop_front();
            }
            else
            {
                dima_score += cards.front();
                cards.pop_front();
            }
        }
        else
        {
            if (turn % 2 == 1)
            {
                sereja_score += cards.back();
                cards.pop_back();
            }
            else
            {
                dima_score += cards.back();
                cards.pop_back();
            }
        }
        turn++;
    }
    cout << sereja_score << " " << dima_score << endl;

    return 0;
}