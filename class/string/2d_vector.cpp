#include <bits/stdc++.h>
#define el "\n"

using namespace std;

void print2DVector(vector<vector<int>> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        int m = v[i].size();
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << el;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n, m;
    // cin >> n >> m;
    // vector<vector<int>> v(n, vector<int>(m, 1));
    // print2DVector(v);

    // int n, m;
    // cin >> n >> m;
    // vector<vector<int>> v(n, vector<int>(m));
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> v[i][j];
    //     }
    // }
    // print2DVector(v);

    int n;
    cin >> n;

    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        // vector<int> nestedV(m);
        vector<int> nestedV;
        for (int j = 0; j < m; j++)
        {
            // cin >> nestedV[j];
            int val;
            cin >> val;
            nestedV.push_back(val);
        }
        v.push_back(nestedV);
    }

    print2DVector(v);

    return 0;
}