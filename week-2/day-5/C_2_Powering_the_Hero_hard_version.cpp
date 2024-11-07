#include <bits/stdc++.h>
#define el '\n'
#define ll long long int

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
                auto it = ml.begin();
                ans += *it;
                ml.erase(it);
            }
        }
    }
    cout << ans << el;
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