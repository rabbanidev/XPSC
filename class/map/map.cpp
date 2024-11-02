#include <bits/stdc++.h>
#define el "\n"

using namespace std;

// void printKeyValue(map<int, int> mp)
// {
//     for (auto [key, val] : mp)
//     {
//         cout << key << " " << val << el;
//     }
//     cout << el;
// }

void printRangeBaseLoop(map<int, int> mp)
{
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << el;
    }
    cout << el;
}

void printIterator(map<int, int> mp)
{
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << el;
    }
    cout << el;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;
    // mp.insert({5, 10});
    // mp.insert({3, 20});
    // mp.insert({1, 5});

    mp[5] = 10;
    mp[3] = 20;
    mp[1] = 5;
    mp[5] = 9;

    // printKeyValue(mp);
    // printRangeBaseLoop(mp);
    printIterator(mp);

    // Find 1
    // auto it = mp.find(5);
    // if (it == mp.end())
    // {
    //     cout << "Key not found" << el;
    // }
    // else
    // {
    //     cout << it->first << " " << it->second << el;
    // }

    // Find 2
    // cout << mp[15] << el;
    // cout << mp[2] << el;
    // cout << el;
    // printIterator(mp);

    // Erase
    // auto it = mp.find(12);
    // if (it != mp.end())
    // {
    //     mp.erase(it);
    //     printIterator(mp);
    // }
    // else
    // {
    //     cout << "Key not found" << el;
    // }

    // Size, empty, clear
    // cout << mp.size() << el;
    // cout << mp.empty() << el;
    // mp.clear();
    // cout << mp.size() << el;
    // cout << mp.empty() << el;

    // auto it = mp.begin();
    // it++;
    // auto it = mp.end();
    // it--;

    // auto it = mp.rbegin();
    // it--;
    // auto it = mp.rend();
    // it--;
    // it--;
    // cout << it->first << " " << it->second << el;

    // auto it = mp.lower_bound(3);
    auto it = mp.upper_bound(3);
    cout << it->first << " " << it->second << el;

    return 0;
}