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
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] == 0)
                continue;
            else if (v[i] == v[i + 1])
                continue;
            else if (v[i] != v[i + 1])
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }

    return 0;
}