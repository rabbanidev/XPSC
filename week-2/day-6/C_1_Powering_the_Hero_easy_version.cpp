#include <bits/stdc++.h>
#define ll long long int
#define el endl

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    multiset<ll, greater<ll>> ml;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] != 0)
        {
            ml.insert(v[i]);
        }
        else
        {
            if (!ml.empty())
            {
                ans += *ml.begin();
                ml.erase(ml.begin());
            }
        }
    }
    cout << ans << el;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}