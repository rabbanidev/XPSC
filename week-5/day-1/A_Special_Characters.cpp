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
        cin >> n;

        if (n % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            string ans = "";
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    ans += 'A';
                }
                else
                {
                    ans += 'B';
                }
            }

            cout << ans << endl;
        }
    }

    return 0;
}