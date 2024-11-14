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
        cin >> n;

        string s;
        cin >> s;

        int count = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] == s[r])
                break;
            else
            {
                count += 2;
                l++;
                r--;
            }
        }

        cout << n - count << el;
    }

    return 0;
}