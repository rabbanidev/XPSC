#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // map<vector<int>, pair<int, int>> mp;
    // vector<int> v1 = {1, 2, 3, 4};
    // mp[v1] = {10, 20};
    // vector<int> v2 = {5, 6, 7, 8};
    // mp[v2] = {30, 40};

    // for (auto [arr, pr] : mp)
    // {
    //     cout << "Key->" << " ";
    //     for (int val : arr)
    //     {
    //         cout << val << " ";
    //     }
    //     cout << "Value->" << " ";
    //     cout << pr.first << " " << pr.second;
    //     cout << el;
    // }

    map<int, set<int>> mp;
    set<int> s1 = {2, 5, 2};
    set<int> s2 = {9, 5, 14};
    set<int> s3 = {12, 1, 6, 8};

    mp[1] = s1;
    mp[2] = s2;
    mp[3] = s3;

    for (auto [key, s] : mp)
    {
        cout << "Key " << key << " -> ";
        for (auto val : s)
        {
            cout << val << " ";
        }
        cout << el;
    }

    int x = 2, y = 7;
    auto LB1 = mp.lower_bound(x);
    if (LB1 != mp.end())
    {

        set<int> s = mp[LB1->first];
        // for (auto val : s)
        //     cout << val << " ";
        // }
        auto LB2 = s.lower_bound(y);
        if (LB2 != s.end())
        {
            cout << *LB2 << endl;
        }
        else
        {
            cout << "Y Element not found" << endl;
        }
    }
    else
    {
        cout << "X Element not found" << endl;
    }

    return 0;
}