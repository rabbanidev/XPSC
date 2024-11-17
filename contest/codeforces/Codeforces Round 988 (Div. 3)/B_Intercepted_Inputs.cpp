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
        int k;
        cin >> k;
        vector<int> a(k);
        for (int i = 0; i < k; i++)
            cin >> a[i];

        int sz = a.size() - 2;

        // if (sz == 1)
        // {
        //     cout << 1 << " " << 1 << el;
        // }

        // else
        // {
        for (int i = 1; i <= sz; i++)
        {
            if (sz % i == 0)
            {
                cout << i << " " << sz / i << el;
                break;
            }
        }
        // }
    }

    return 0;
}