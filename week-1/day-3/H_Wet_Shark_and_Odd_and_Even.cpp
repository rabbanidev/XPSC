#include <bits/stdc++.h>
#define el "\n"
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    ll sum = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum % 2 == 0)
    {
        cout << sum << el;
        return 0;
    }
    else
    {
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if ((sum - arr[i]) % 2 == 0)
            {
                cout << sum - arr[i] << el;
                return 0;
            }
        }
    }

    cout << 0 << el;

    return 0;
}