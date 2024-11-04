#include <bits/stdc++.h>
#define el "\n"
#define ll long long int

using namespace std;

bool valid(int n, int m, vector<vector<char>> &v)
{
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == v[i + 1][j])
                continue;
            else if (v[i][j] == 'G' && v[i + 1][j] == 'B')
                continue;
            else if (v[i][j] == 'B' && v[i + 1][j] == 'G')
                continue;
            else
            {
                flag = false;
                break;
            }
        }
    }

    return flag;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n = 2, m;
        cin >> m;

        vector<vector<char>> v(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }

        if (valid(n, m, v))
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }

    return 0;
}