#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();

    set<string> s;

    for (int i = 0; i < n; i++)
    {
        string sentence;
        getline(cin, sentence);

        s.insert(sentence);
    }

    cout << s.size() << el;

    return 0;
}