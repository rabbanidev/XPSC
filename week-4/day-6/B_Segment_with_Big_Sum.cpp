#include <bits/stdc++.h>
#define el "\n"
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0, ans = INT_MAX;
    ll sum = 0;
    while (r < n)
    {
        sum += a[r];

        while (sum >= s)
        {
            ans = min(ans, r - l + 1);
            sum -= a[l];
            l++;
        }

        r++;
    }

    if (ans == INT_MAX)
        cout << -1 << el;
    else
        cout << ans << el;

    return 0;
}