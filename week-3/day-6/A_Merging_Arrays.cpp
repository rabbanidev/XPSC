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

    vector<int> v;
    int l = 0, r = 0;
    while (l < n && r < m)
    {
        if (a[l] <= b[r])
        {
            v.push_back(a[l]);
            l++;
        }
        else
        {
            v.push_back(b[r]);
            r++;
        }
    }

    if (l < n)
    {
        for (int i = l; i < n; i++)
        {
            v.push_back(a[i]);
        }
    }

    if (r < m)
    {
        for (int i = r; i < m; i++)
        {
            v.push_back(b[i]);
        }
    }

    for (auto val : v)
        cout << val << " ";

    return 0;
}