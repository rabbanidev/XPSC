#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    int res = x - y;
    if (res >= 18)
        cout << "RCB" << el;
    else
        cout << "CSK" << el;

    return 0;
}