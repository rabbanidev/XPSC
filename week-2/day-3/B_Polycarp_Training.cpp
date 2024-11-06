#include <bits/stdc++.h>
#define el endl

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }

    int ans = 0, problems = 1;
    while (!ms.empty())
    {
        auto lowerBound = ms.lower_bound(problems);
        if (lowerBound != ms.end())
        {
            ans++;
            ms.erase(lowerBound);
        }
        else
        {
            break;
        }
        problems++;
    }

    cout << ans << el; 
    return 0;
}