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
        int x;
        cin >> x;
        int diff = 100 - x;
        // cout << diff << el;

        int div = diff / 10;
        cout << div * 10 << el;
    }

    return 0;
}