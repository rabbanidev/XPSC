#include <bits/stdc++.h>
#define el "\n"
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            mp[c]++;
        }

        int cnt = 0;
        for (auto it : mp)
        {
            if (it.second % 2 == 1)
                cnt++;
        }

        if (cnt - 1 < 0)
            cnt = 0;
        else
            cnt = cnt - 1;

        if (k >= cnt)
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }

    return 0;
}