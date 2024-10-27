#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // tuple<string, int, int> t = make_tuple("Rabbani", 1, 1765);
    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << el;
    // tuple<string, int, int> t = {"Rabbani", 1, 1765};
    // auto [name, roll, phone] = t;
    // cout << name << " " << roll << " " << phone << el;

    int n;
    cin >> n;

    tuple<string, int, int> t[n];
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, phone;
        cin >> name >> roll >> phone;
        t[i] = {name, roll, phone};
    }

    for (auto [name, roll, phone] : t)
    {
        cout << name << " " << roll << " " << phone << el;
    }

    return 0;
}