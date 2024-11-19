#include <bits/stdc++.h>
#define el "\n"

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string res;

    int i = 0;
    while (i < n)
    {
        if (s[i + 2] == '0' && s[i + 3] != '0')
        {
            res += 96 + stoi(s.substr(i, 2));
            i += 3;
        }
        else
        {
            res += 96 + (s[i] - '0');
            i++;
        }
    }

    cout << res << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}