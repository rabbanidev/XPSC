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
        int n, k, p;
        cin >> n >> k >> p;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int mx = INT_MIN, sum = 0;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, a[i]);
            sum += a[i];
        }
        int ved = mx + k, varun = (sum - mx) + p;

        if (ved > varun)
            cout << "Ved" << el;
        else if (varun > ved)
            cout << "Varun" << el;
        else
            cout << "Equal" << el;
    }

    return 0;
}