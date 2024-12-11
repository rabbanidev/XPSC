#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Read number of test cases

    while (t--)
    {
        int n;
        cin >> n; // Read size of the array
        vector<int> v(n);

        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i]; // Read each element of the array
            sum += v[i]; // Keep track of the total sum
        }

        // Check if the sum of the array is divisible by n
        if (sum % n == 0)
        {
            cout << "YES" << endl; // It's possible to make all elements equal
        }
        else
        {
            cout << "NO" << endl; // It's not possible
        }
    }

    return 0;
}
