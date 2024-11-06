#include <bits/stdc++.h>
#define el endl

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
        map<int, set<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        for (int i = 1; i <= m; i++)
        {
            int l, r;
            cin >> l >> r;
            if ((mp.find(l) == mp.end()) || (mp.find(r) == mp.end()))
            {
                cout << "NO" << el;
            }
            else
            {
                int leftIndex, rightIndex;
                leftIndex = *mp[l].begin();
                rightIndex = *mp[r].rbegin();
                if (leftIndex < rightIndex)
                {
                    cout << "YES" << el;
                }
                else
                {
                    cout << "NO" << el;
                }
            }
        }
    }

    return 0;
}