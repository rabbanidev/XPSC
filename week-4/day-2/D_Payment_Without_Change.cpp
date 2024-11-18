#include <bits/stdc++.h>
#define el "\n"
#define ll long long int

using namespace std;

void solve()
{

    ll a, b, n, s;
    cin >> a >> b >> n >> s;

    ll res = s / n;
    res = min(res, a);

    if (s - n * res <= b)
    {
        cout << "YES" << el;
    }
    else
    {
        cout << "NO" << el;
    }
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