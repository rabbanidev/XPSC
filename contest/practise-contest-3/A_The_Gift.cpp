#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n, m;
    cin >> x >> n >> m;

    if (x + m >= n)
        cout << "YES" << el;
    else
        cout << "NO" << el;

    return 0;
}