#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        vector<int> ascArray;
        for (int i = 2; i < n; i++)
        {
            ascArray.push_back(arr[i]);
        }

        vector<int> dscArray;
        for (int i = n - 3; i >= 0; i--)
        {
            dscArray.push_back(arr[i]);
        }

        vector<int> mixedArray;
        for (int i = 1; i < n - 1; i++)
        {
            mixedArray.push_back(arr[i]);
        }

        int minAsc = *min_element(ascArray.begin(), ascArray.end());
        int maxAsc = *max_element(ascArray.begin(), ascArray.end());
        int minDsc = *min_element(dscArray.begin(), dscArray.end());
        int maxDsc = *max_element(dscArray.begin(), dscArray.end());
        int minMixed = *min_element(mixedArray.begin(), mixedArray.end());
        int maxMixed = *max_element(mixedArray.begin(), mixedArray.end());

        // cout << minAsc << " " << maxAsc << endl;
        // cout << minDsc << " " << maxDsc << endl;
        // cout << minMixed << " " << maxMixed << endl;

        int ans = min((maxAsc - minAsc), (maxDsc - minDsc));
        ans = min(ans, (maxMixed - minMixed));
        cout << ans << el;
    }

    return 0;
}