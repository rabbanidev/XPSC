#include <bits/stdc++.h>
#define el "\n"
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    set<int> s;
    vector<int> sizes(n + 1);
    for (int i = n; i >= 1; i--)
    {
        s.insert(a[i]);
        sizes[i] = s.size();
    }

    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        cout << sizes[x] << el;
    }

    return 0;
}