#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    map<string, string> handle_map, reverse_map;
    while (q--)
    {
        string old_handle, new_handle;
        cin >> old_handle >> new_handle;
        if (reverse_map.find(old_handle) == reverse_map.end())
        {
            handle_map[old_handle] = new_handle;
            reverse_map[new_handle] = old_handle;
        }
        else
        {
            string original_handle = reverse_map[old_handle];
            handle_map[original_handle] = new_handle;
            reverse_map.erase(old_handle);
            reverse_map[new_handle] = original_handle;
        }
    }
    
    cout << handle_map.size() << endl;
    for (auto [original_handle, current_handle] : handle_map)
        cout << original_handle << " " << current_handle << endl;
    return 0;
}