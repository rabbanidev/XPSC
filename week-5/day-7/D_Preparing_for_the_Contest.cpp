#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            cout << i << " ";
        }
        for (int i = n; i > k; i--)
        {
            cout << i << " ";
        }
        cout << el;
    }

    return 0;
}
