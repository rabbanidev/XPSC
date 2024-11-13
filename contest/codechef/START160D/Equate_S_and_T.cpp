#include <bits/stdc++.h>
#define el "\n"

using namespace std;

bool solved(string s, string t)
{
    int countA1 = 0, countB1 = 0;
    for (char ch : s)
    {
        if (ch == 'a')
            countA1++;
        else
            countB1++;
    }

    int countA2 = 0, countB2 = 0;
    for (char ch : t)
    {
        if (ch == 'a')
            countA2++;
        else
            countB2++;
    }

    if (countB1 != countB2)
        return false;

    int res1 = (countA1 * 2) + countB1;
    int res2 = (countA2 * 2) + countB2;

    return res1 == res2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;

        string s, t;
        cin >> s >> t;

        bool flag = solved(s, t);
        if (flag)
            cout << "Yes" << el;
        else
            cout << "No" << el;
    }

    return 0;
}