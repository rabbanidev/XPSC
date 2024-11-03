#include <bits/stdc++.h>
#define el "\n"

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> v;
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }

        sort(v.begin(), v.end(), compare);

        map<int, int> mp;
        for (int i = 0; i < v.size(); i++)
        {
            int key = v[i].first;
            int val = v[i].second;
            mp[key] += val;
        }

        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += mp[i];
        }

        cout << sum << el;

        // map<int, int> mp;
        // if (k <= n)
        // {
        //     for (int i = 0; i < k; i++)
        //     {
        //         int key = v[i].first;
        //         int val = v[i].second;

        //         auto it = mp.find(key);
        //         if (it == mp.end())
        //         {
        //             mp[key] = val;
        //         }
        //         else
        //         {
        //             mp[key] = mp[key] + val;
        //         }
        //     }
        // }
        // else
        // {
        //     for (int i = 0; i < n; i++)
        //     {
        //         int key = v[i].first;
        //         int val = v[i].second;

        //         auto it = mp.find(key);
        //         if (it == mp.end())
        //         {
        //             mp[key] = val;
        //         }
        //         else
        //         {
        //             mp[key] = mp[key] + val;
        //         }
        //     }
        // }

        // int sum = 0;
        // for (auto [key, val] : mp)
        // {
        //     sum += val;
        // }

        // cout << sum << el;
    }

    return 0;
}
