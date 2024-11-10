#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> arr1(n), arr(m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    int l = 0, r = 0, cnt = 0;
    vector<int> v;
    while (r < m)
    {
        if (l < n && arr1[l] < arr[r])
        {
            cnt++, l++;
        }
        else
        {
            r++;
            v.push_back(cnt);
        }
    }

    for (auto val : v)
    {
        cout << val << " ";
    }

    return 0;
}