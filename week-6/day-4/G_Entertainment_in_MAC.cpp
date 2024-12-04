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
        string s;
        cin >> n >> s;
        string word = s;
        reverse(word.begin(), word.end());

        if (s <= word)
        {
            cout << s << el;
        }
        else
        {
            cout << word << s << el;
        }
    }

    return 0;
}