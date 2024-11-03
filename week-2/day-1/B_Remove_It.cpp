#include <bits/stdc++.h>
#define el "\n"
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> res;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] != x)
        {
            res.push_back(arr[i]);
        }
    }

    reverse(res.begin(), res.end());
    for (int val : res)
    {
        cout << val << " ";
    }

    return 0;
}