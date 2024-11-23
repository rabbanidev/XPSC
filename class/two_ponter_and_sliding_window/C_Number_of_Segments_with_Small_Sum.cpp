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
        cin >> a[i];

    ll sum = 0, ans = 0;
    int l = 0, r = 0;

    while (r < n)
    {
        sum += a[r];
        if (sum <= s)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (sum > s && l <= r)
            {
                sum -= a[l];
                l++;
            }
            if (sum <= s)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }

    cout << ans << el;

    return 0;
}