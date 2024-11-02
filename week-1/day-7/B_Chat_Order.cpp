#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<string, bool> mp;
    for (int i = n - 1; i >= 0; i--)
    {
        string s = v[i];
        auto it = mp.find(s);

        if (it != mp.end())
        {
            continue;
        }
        else
        {
            cout << v[i] << el;
            mp[v[i]] = true;
        }
    }

    return 0;
}
