#include <bits/stdc++.h>
#define el "\n"

using namespace std;

void print(multiset<int> ms)
{
    for (auto val : ms)
        cout << val << " ";
    cout << el;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }

    print(ms);

    // Find and erase
    // O(logn) -> jodi aktai element thake
    // O(logn+k) -> jodi aktai element ar multiple occurrence thake
    // auto it = ms.find(2);
    // if (it != ms.end())
    // {
    //     cout << "Deleted element: " << *it << el;
    //     // Delete all occcurences of the element
    //     ms.erase(2);
    // }
    // else
    // {
    //     cout << "Element not found." << el;
    // }
    // print(ms);

    // Delete one element
    // auto it = ms.find(2);
    // if (it != ms.end())
    // {
    //     cout << "Deleted element: " << *it << el;
    //     // Delete one element
    //     ms.erase(it);
    // }
    // else
    // {
    //     cout << "Element not found." << el;
    // }
    // print(ms);

    // Count
    // O(logn) -> jodi aktai element thake
    // O(logn+k) -> jodi aktai element ar multiple occurrence thake
    // cout << ms.count(2) << endl;

    // auto it = ms.lower_bound(2);
    auto it = ms.upper_bound(3);
    if (it != ms.end())
    {
        cout << *it << el;
    }
    else
    {
        cout << "Element not found." << el;
    }

    return 0;
}