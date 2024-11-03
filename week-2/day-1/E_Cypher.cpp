#include <bits/stdc++.h>
#define el "\n"
#define ll long long int

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        string s;
        cin >> x >> s;

        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == 'D')
            {
                if (a[i] == 9)
                    a[i] = 0;
                else
                    a[i] = a[i] + 1;
            }
            else
            {
                if (a[i] == 0)
                    a[i] = 9;
                else
                    a[i] = a[i] - 1;
            }
        }
    }

    for (int x : a)
        cout << x << " ";
    cout << el;
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