#include <bits/stdc++.h>
#define el "\n"

using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr;
    for (int i = 1; i <= n; i++)
    {
        int val = pow(2, i);
        arr.push_back(val);
    }

    int r_sum = 0;
    for (int i = arr.size() - x; i < n; i++)
    {
        r_sum += arr[i];
    }

    int l_sum = 0;
    for (int i = 0; i < n - x; i++)
    {
        l_sum += arr[i];
    }

    cout << r_sum - l_sum << el;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}