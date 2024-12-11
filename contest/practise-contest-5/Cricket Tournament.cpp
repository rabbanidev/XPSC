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
        int n, m;
        cin >> n >> m;

        if (n - 1 >= m)
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }

    return 0;
}