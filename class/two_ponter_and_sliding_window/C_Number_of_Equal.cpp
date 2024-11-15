#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Solution-1
    // int n, m;
    // cin >> n >> m;
    // vector<int> a(n), b(m);
    // map<int, int> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    //     mp[a[i]]++;
    // }
    // long long int cnt = 0;
    // for (int i = 0; i < m; i++)
    // {
    //     cin >> b[i];
    //     cnt += mp[b[i]];
    // }
    // cout << cnt << el;

    // Solution-2
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    long long ans = 0;
    int l = 0, r = 0;
    while (l < n && r < m)
    {
        int curr = a[l], cnt1 = 0, cnt2 = 0;
        while (l < n && a[l] == curr)
        {
            cnt1++;
            l++;
        }

        while (r < m && curr > b[r])
        {
            r++;
        }

        while (r < m && b[r] == curr)
        {
            cnt2++;
            r++;
        }

        ans += (1LL * cnt1 * cnt2);
    }

    cout << ans << el;

    return 0;
}