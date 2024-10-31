#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if (b >= a)
    {
        cout << 0 << el;
    }
    else
    {
        cout << a - b << el;
    }

    return 0;
}