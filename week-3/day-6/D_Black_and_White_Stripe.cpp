#include <bits/stdc++.h>
#define el "\n"

using namespace std;

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
        string s;
        cin >> s;

        int cnt = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W')
                cnt++;
        }

        int mn = cnt;

        for (int i = k; i < n; i++)
        {
            if (s[i - k] == 'W')
            {
                cnt--;
            }

            if (s[i] == 'W')
            {
                cnt++;
            }

            mn = min(mn, cnt);
        }

        cout << mn << el;
    }

    return 0;
}