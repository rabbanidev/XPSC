#include <bits/stdc++.h>
#define el "\n"

using namespace std;

bool solve(int n, int k)
{
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a.push_back(0);
            b.push_back(1);
        }
        else
        {
            a.push_back(1);
            b.push_back(0);
        }
    }

    int sum = 0;
    for (auto val : a)
        sum += val;

    if (sum == k)
    {
        return true;
    }

    sum = 0;
    for (auto val : b)
        sum += val;

    if (sum == k)
    {
        return true;
    }

    return false;
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

        if (solve(n, k))
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }

    return 0;
}