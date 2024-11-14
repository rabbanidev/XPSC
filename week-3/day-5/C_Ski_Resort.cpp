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
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v(n);
        int cnt = 0;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] <= q)
                cnt++;
            else
                cnt = 0;
            ans += max(0, cnt - k + 1);
        }
        cout << ans << el;
    }

    return 0;
}