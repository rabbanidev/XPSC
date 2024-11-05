#include <bits/stdc++.h>
#define el "\n"
#define ll long long int

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

        int cnt = 0;
        int i = 1;
        while (i <= n)
        {
            if (i == 2)
            {
                cnt++;
            }

            if (i == 7)
            {
                i = 1;
                n = n - 7;
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