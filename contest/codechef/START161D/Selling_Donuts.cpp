#include <bits/stdc++.h>
#define el "\n"

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), b(m + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];

    int count = 0;
    for (int i = 1; i <= m; i++)
    {
        if (a[b[i]] > 0)
        {
            a[b[i]]--;
        }
        else
        {
            count++;
        }
    }

    cout << count << el;
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