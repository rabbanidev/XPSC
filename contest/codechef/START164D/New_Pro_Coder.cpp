#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    if (m >= ceil((n * 1.00) / 2))
        cout << "NEWBIE" << el;
    else
        cout << "PRO" << el;

    return 0;
}