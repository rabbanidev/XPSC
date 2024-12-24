#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        if (s == t)
        {
            cout << "YES" << el;
            continue;
        }

        int pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                pos = i;
                break;
            }
        }

        if (pos != -1)
        {
            bool ok = true;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != t[i])
                {
                    if (pos > i)
                    {
                        ok = false;
                        break;
                    }
                }
            }
            if (ok)
            {
                cout << "YES" << el;
            }
            else
            {
                cout << "NO" << el;
            }
        }
        else
        {
            cout << "NO" << el;
        }
    }

    return 0;
}