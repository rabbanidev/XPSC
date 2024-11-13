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
        int n, k;
        cin >> n >> k;

        if (k >= (n * 10) && k <= ((n * 10) + (n * 2)))
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