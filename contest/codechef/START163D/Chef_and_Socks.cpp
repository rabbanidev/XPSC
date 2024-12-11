#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, x, y;
    cin >> a >> x >> y;

    if (a <= (x + y))
    {
        cout << "YES" << el;
    }
    else
    {
        cout << "NO" << el;
    }

    return 0;
}