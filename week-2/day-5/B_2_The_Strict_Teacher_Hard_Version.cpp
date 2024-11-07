#include <bits/stdc++.h>
#define el '\n'

using namespace std;

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    while (q--)
    {
        int x;
        cin >> x;
        int k = upper_bound(v.begin(), v.end(), x) - v.begin();
        if (k == 0)
        {
            cout << v[0] - 1 << el;
        }
        else if (k == m)
        {
            cout << n - v[m - 1] << el;
        }
        else
        {
            cout << (v[k] - v[k - 1]) / 2 << el;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}