#include <bits/stdc++.h>
#define el "\n"

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> uniqueStr;
    for (int i = 0; i < n; i++)
    {
        uniqueStr.insert(s[i]);
    }

    map<char, char> mp;
    auto rit = uniqueStr.rbegin();
    for (auto it = uniqueStr.begin(); it != uniqueStr.end(); it++)
    {
        mp[*it] = *rit;
        rit++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << mp[s[i]];
    }
    cout << el;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}