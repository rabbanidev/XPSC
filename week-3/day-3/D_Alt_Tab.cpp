#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    queue<string> q;
    map<string, int> mp;
    for (int i = n - 1; i >= 0; i--)
    {
        string s = v[i];

        if (mp[s] > 0)
        {
            mp[s]++;
        }
        else
        {
            q.push(s);
            mp[s]++;
        }
    }

    while (!q.empty())
    {
        string s = q.front();
        cout << s[s.size() - 2] << s[s.size() - 1];
        q.pop();
    }

    return 0;
}