#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int cnt = 0;
    int l = 0, r = 0;
    while (r < m)
    {
        if (l < n && a[l] < b[r])
        {
            l++;
            cnt++;
        }
        else
        {
            cout << cnt << " ";
            r++;
        }
    }

    return 0;
}