#include <bits/stdc++.h>
#define el "\n"
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        int chefCount = 0, chefinaCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
                continue;

            if (a[i] == 'R' && b[i] == 'S')
                chefCount++;
            else if (a[i] == 'S' && b[i] == 'R')
                chefinaCount++;

            else if (a[i] == 'S' && b[i] == 'P')
                chefCount++;
            else if (a[i] == 'P' && b[i] == 'S')
                chefinaCount++;

            else if (a[i] == 'P' && b[i] == 'R')
                chefCount++;
            else if (a[i] == 'R' && b[i] == 'P')
                chefinaCount++;
        }

        int needCount = chefinaCount - chefCount + 1;
        int res = max(0, (needCount + 1) / 2);
        cout << res << el;
    }
    return 0;
}