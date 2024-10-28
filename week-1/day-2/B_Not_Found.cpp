#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int freq[26] = {0};
    for (char ch : s)
    {
        freq[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            cout << (char)(i + 'a') << el;
            return 0;
        }
    }

    cout << "None" << el;

    return 0;
}