#include <bits/stdc++.h>
#define el "\n"

using namespace std;

void solve()
{
    string s, res;
    cin >> s;

    stack<char> upperStk, lowerStk;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        char c = s[i];

        if (c == 'B')
        {
            upperStk.push(c);
        }
        else if (c == 'b')
        {
            lowerStk.push(c);
        }

        else if (isupper(c))
        {
            if (upperStk.empty())
            {
                res += c;
            }
            else
            {
                upperStk.pop();
            }
        }
        else
        {
            if (lowerStk.empty())
            {
                res += c;
            }
            else
            {
                lowerStk.pop();
            }
        }
    }

    reverse(res.begin(), res.end());
    cout << res << el;
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
