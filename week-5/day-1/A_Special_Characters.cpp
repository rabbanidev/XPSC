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
            cout << "NO" << el;
        }
        else
        {
            cout << "YES" << el;

            for (int i = 0; i < n / 2; i++)
            {
                if (i % 2 == 0)
                {
                    cout << "BB";
                }
                else
                {
                    cout << "AA";
                }
            }

            cout << el;
        }
    }

    return 0;
}