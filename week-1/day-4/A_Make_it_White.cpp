#include <bits/stdc++.h>
#define el "\n"

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<char> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 'B')
        {
            break;
        }
        count++;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == 'B')
        {
            break;
        }
        count++;
    }

    cout << n - count << el;
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