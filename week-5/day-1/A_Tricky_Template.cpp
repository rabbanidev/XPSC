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
        int n;
        string a, b, c;
        cin >> n >> a >> b >> c;

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != c[i] && b[i] != c[i])
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << el;
    }

    return 0;
}