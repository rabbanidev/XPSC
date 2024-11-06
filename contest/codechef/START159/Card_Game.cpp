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
        int n, x;
        cin >> n >> x;

        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i == x)
                continue;

            else if ((i + x) % 2 == 0)
                cnt++;
        }

        cout << cnt << el;
    }

    return 0;
}