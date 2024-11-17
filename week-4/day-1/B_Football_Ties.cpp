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
        int x, y;
        cin >> x >> y;

        while (x >= 3 && y >= 3)
        {
            x -= 3, y -= 3;
        }

        cout << min(x, y) << el;
    }

    return 0;
}