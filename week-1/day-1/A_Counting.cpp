#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, cnt = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        cnt++;
    }

    cout << cnt << el;

    return 0;
}