#include <bits/stdc++.h>
#define el "\n"

using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> arrA(n), arrB(n);
    for (int i = 0; i < n; i++)
        cin >> arrA[i];
    for (int i = 0; i < n; i++)
        cin >> arrB[i];

    int countA = 0, countB = 0;
    vector<int> needVotes;
    for (int i = 0; i < n; i++)
    {
        if (arrA[i] > arrB[i])
            countA++;
        else if (arrB[i] > arrA[i])
        {
            countB++;
            needVotes.push_back((arrB[i] - arrA[i]) + 1);
        }
        else
        {
            needVotes.push_back(1);
        }
    }

    if (countA > countB)
    {
        cout << "YES" << el;
        return;
    }

    sort(needVotes.begin(), needVotes.end());

    for (int val : needVotes)
    {
        if (x >= val)
        {
            countA++;
            x -= val;
        }
    }

    if (countA > n / 2)
        cout << "YES" << el;
    else
        cout << "NO" << el;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
