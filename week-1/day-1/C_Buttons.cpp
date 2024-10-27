#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int both_max = a + b;

    int a_max = 0;
    for (int i = 1; i <= 2; i++)
    {
        a_max += a;
        a--;
    }

    int b_max = 0;
    for (int i = 1; i <= 2; i++)
    {
        b_max += b;
        b--;
    }

    int mx = max(a_max, b_max);
    mx = max(mx, both_max);

    cout << mx << el;

    return 0;
}