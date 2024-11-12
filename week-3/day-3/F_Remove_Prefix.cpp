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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        map<int, int> mp;
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (mp[v[i]] > 0)
            {
                break;
            }

            mp[v[i]]++;
            cnt++;
        }

        cout << n - cnt << el;
    }

    return 0;
}