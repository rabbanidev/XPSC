#include <bits/stdc++.h>
#define el "\n"

using namespace std;

void solve()
{
    string s;
    cin >> s;

    if (s.size() == 1)
    {
        char ch = s[0];
        if (ch == 'z')
        {
            s.push_back('a');
        }
        else
        {
            s.push_back((char)(ch + 1));
        }
        cout << s << el;
        return;
    }

    string s1, s2;
    for (int i = 0; i < s.size() - 1; i++)
    {
        s1.push_back(s[i]);
        if (s[i] == s[i + 1])
        {
            char ch = s[i];
            if (ch == 'z')
            {
                s2.push_back('a');
            }
            else
            {
                s2.push_back((char)(ch + 1));
            }

            for (int j = i + 1; j < s.size(); j++)
            {
                s2.push_back(s[j]);
            }
            break;
        }
    }

    cout << s1 + s2 << el;
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
