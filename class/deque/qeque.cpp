#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<int> d = {1, 2, 3, 4};
    d.push_front(5);
    d.push_front(7);
    d.push_front(6);

    for (auto val : d)
        cout << val << " ";
    cout << el;

    d.pop_front();
    d.pop_front();

    for (auto val : d)
        cout << val << " ";
    cout << el;

    return 0;
}