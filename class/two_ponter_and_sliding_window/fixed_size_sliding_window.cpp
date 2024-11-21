#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sum = 0, ans = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        sum += a[r];
        if (r - l + 1 == k)
        {
            ans = max(ans, sum);
            sum -= a[l];
            l++, r++;
        }
        else
        {
            r++;
        }
    }

    cout << ans << el;

    return 0;
}