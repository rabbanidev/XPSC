#include <bits/stdc++.h>
#define el "\n"
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    m++;

    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 0; i < m - 1; i++)
    {
        int dif = 0;
        int x = a[i] ^ a[m - 1];
        for (int k = 20; k >= 0; k--)
        {
            if ((x >> k) & 1)
            {
                dif++;
            }
        }
        if (dif <= k)
            cnt++;
    }
    cout << cnt << el;

    return 0;
}