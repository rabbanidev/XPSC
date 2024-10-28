#include <bits/stdc++.h>
#define el "\n"

using namespace std;

void solution1()
{
    int n;
    cin >> n;
    string s = to_string(n);
    for (int i = s.size(); i < 4; i++)
    {
        s = '0' + s;
    }
    cout << s << el;
}

void solution2()
{
    string s;
    cin >> s;
    for (int i = s.size(); i < 4; i++)
    {
        s = '0' + s;
    }
    cout << s << el;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // solution1();
    solution2();

    return 0;
}