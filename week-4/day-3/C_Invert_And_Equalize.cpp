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
        int n;
        string s;
        cin >> n >> s;

        int countZero = 0, countOne = 0;

        char prev = s[0];
        if (prev == '0')
            countZero++;
        else
            countOne++;

        for (int i = 1; i < n; i++)
        {
            if (s[i] != prev)
            {
                if (s[i] == '0')
                    countZero++;
                else
                    countOne++;

                prev = s[i];
            }
        }

        cout << min(countZero, countOne) << el;
    }

    return 0;
}