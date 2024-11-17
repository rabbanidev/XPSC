#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        int ans = 0;
        for (auto [key, val] : mp)
        {
            if (val >= 2)
            {
                ans += val / 2;
            }
        }
        cout << ans << el;
    }

    return 0;
}