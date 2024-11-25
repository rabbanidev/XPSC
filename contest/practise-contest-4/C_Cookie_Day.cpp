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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                int per = a[i] % k;
                mn = min(mn, per);
            }
        }

        if (mn == INT_MAX)
            cout << -1 << el;
        else
            cout << mn << el;
    }

    return 0;
}