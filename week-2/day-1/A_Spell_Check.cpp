#include <bits/stdc++.h>
#define el "\n"
#define ll long long int

using namespace std;

bool valid(string s)
{
    string name = "Timur";

    if (s.size() == name.size())
    {
        sort(name.begin(), name.end());
        sort(s.begin(), s.end());

        return name == s;
    }

    return false;
}

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
        string s;
        cin >> s;

        if (valid(s))
            cout << "YES" << el;
        else
            cout << "NO" << el;
    }

    return 0;
}