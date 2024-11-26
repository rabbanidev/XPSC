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
        int l = 1, r = 3 * n;
        vector<pair<int, int>> a;
        while (l < r)
        {
            a.push_back({l, r});
            l += 3, r -= 3;
        }
        cout << a.size() << el;
        for (auto it : a)
        {
            cout << it.first << " " << it.second << " ";
        }
        cout << el;
    }

    return 0;
}