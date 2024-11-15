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
        int i = 0;
        while (i < n)
        {
            if (s[i] == 'B')
            {
                cnt++;
                i += k;
            }
            else
            {
                i++;
            }
        }

        cout << cnt << el;
    }

    return 0;
}