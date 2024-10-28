#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n, greater<int>());

    int seraja_sum = 0;
    for (int i = 0; i < n; i += 2)
    {
        seraja_sum += arr[i];
    }

    int dima_sum = 0;
    for (int i = 1; i < n; i += 2)
    {
        dima_sum += arr[i];
    }

    cout << seraja_sum << " " << dima_sum << el;

    return 0;
}