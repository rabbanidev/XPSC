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
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int mn = min(a[i] * x, y);
            ans += mn;
        }
        cout << ans << el;
    }

    return 0;
}