#include <bits/stdc++.h>
#define el "\n"

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        int dif = abs(arr[i] - arr[i + 1]);
        if (!(dif == 5 || dif == 7))
        {
            flag = false;
        }
    }

    if (flag)
        cout << "YES" << el;
    else
        cout << "NO" << el;
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