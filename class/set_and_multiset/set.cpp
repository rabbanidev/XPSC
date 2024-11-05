/*
    Input:
        8
        2 5 1 3 4 6 2 1
*/

#include <bits/stdc++.h>
#define el "\n"

using namespace std;

void printDsc(set<int, greater<int>> s)
{
    for (auto val : s)
        cout << val << " ";
    cout << el;
}

void printAsc(set<int> s)
{
    for (auto val : s)
        cout << val << " ";
    cout << el;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // set<int, greater<int>> s; //Decending order
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    printAsc(s);

    // auto it = s.begin();
    // auto it = s.end();
    // auto it = --s.end();

    // Find and erase
    // auto it = s.find(5);
    // if (it != s.end())
    // {
    //     cout << "Deleted element: " << *it << el;
    //     s.erase(it);
    // }
    // else
    // {
    //     cout << "Element not found." << el;
    // }
    // printAsc(s);

    // Size, empty, clear
    // cout << s.size() << el;
    // cout << s.empty() << el;
    // s.clear();
    // cout << s.size() << el;
    // cout << s.empty() << el;

    // auto it = s.lower_bound(3);
    auto it = s.upper_bound(3);
    cout << *it << el;

    return 0;
}