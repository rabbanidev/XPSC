#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t;
    cin >> a >> b >> t;

    int i = a, res = 0;
    while (i <= t)
    {
        res += b;
        i += a;
    }

    cout << res << el;

    return 0;
}