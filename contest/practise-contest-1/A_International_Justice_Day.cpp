#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    if (x >= y)
    {
        cout << "YES" << el;
    }
    else
    {
        cout << "NO" << el;
    }

    return 0;
}