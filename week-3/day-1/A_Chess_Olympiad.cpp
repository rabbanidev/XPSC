#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;
    int cnt = x + y + z;

    if (x > z)
    {
        cout << "Yes" << el;
    }
    else if (cnt == 4 && x <= z)
    {
        cout << "No" << el;
    }
    else if (z < 4)
    {
        int ans;
        ans = x + (4 - cnt);
        if (ans > z)
        {
            cout << "Yes" << el;
        }
        else
        {
            cout << "No" << el;
        }
    }

    return 0;
}