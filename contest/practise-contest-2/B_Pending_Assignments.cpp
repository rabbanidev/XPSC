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
        int x, y, z;
        cin >> x >> y >> z;

        if ((x * y) <= (z * 24 * 60))
        {
            cout << "YES" << el;
        }
        else
        {
            cout << "NO" << el;
        }
    }

    return 0;
}