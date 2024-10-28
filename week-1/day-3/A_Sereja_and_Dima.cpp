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

    int l = 0, r = n - 1, s_sum = 0, d_sum = 0;
    bool flag = true;
    while (l <= r)
    {
        if (flag)
        {
            if (arr[l] > arr[r])
            {
                s_sum += arr[l];
                l++;
            }
            else
            {
                s_sum += arr[r];
                r--;
            }
        }
        else
        {
            if (arr[l] > arr[r])
            {
                d_sum += arr[l];
                l++;
            }
            else
            {
                d_sum += arr[r];
                r--;
            }
        }

        flag = !flag;
    }

    cout << s_sum << " " << d_sum << el;

    return 0;
}