#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> mp;

    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;

        auto exit = mp.find(s);
        if (exit != mp.end())
        {
            cout << exit->first << exit->second << el;
            mp[s] = exit->second + 1;
        }
        else
        {
            mp[s] = 1;
            cout << "OK" << el;
        }
    }

    return 0;
}