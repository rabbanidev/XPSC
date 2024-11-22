#include <bits/stdc++.h>
#define el "\n"
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l = 0, r = 0;
    ll sum = 0, cnt = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum >= k)
        {
            while (sum >= k)
            {
                cnt += n - r;
                sum -= v[l];
                l++;
            }
        }
        r++;
    }
    cout << cnt << el;

    return 0;
}