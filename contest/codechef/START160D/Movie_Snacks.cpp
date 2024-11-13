#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    int res1 = (x * 2) + (y * 3);
    int res2 = (z * 2) + y;

    if (res1 < res2)
    {
        cout << res1 << el;
    }
    else
    {
        cout << res2 << el;
    }

    return 0;
}