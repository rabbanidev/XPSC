#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int total = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            total += v[i].size();
            if (total > m)
                break;
            mx++;
        }
        cout << mx << el;
    }

    return 0;
}