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
        int a, b, c;
        cin >> a >> b >> c;

        int res1 = abs(a - 1);
        int res2 = abs(b - c) + abs(c - 1);

        if (res1 < res2)
        {
            cout << 1 << el;
        }
        else if (res2 < res1)
        {
            cout << 2 << el;
        }
        else
        {
            cout << 3 << el;
        }
    }

    return 0;
}