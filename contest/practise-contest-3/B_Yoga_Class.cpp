#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        if (n % 2 == 0)
        {
            cout << n * x << el;
        }
        else
        {
            int div = n / 2;
            int remaning = n % 2;
            int ans = div * y + remaning * x;

            cout << ans << el;
        }
    }

    return 0;
}
