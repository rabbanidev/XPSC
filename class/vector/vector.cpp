#include <bits/stdc++.h>
#define el "\n"

using namespace std;

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << el;
}

void printWithIt(vector<int> v)
{
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << el;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n;
    // cin >> n;
    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // int n;
    // cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // print(v);
    // v.pop_back();
    // print(v);

    // vector<int> v = {1, 2, 3, 4, 5};
    // cout << v.front() << " " << v.back() << el;
    // cout << v[0] << " " << v[v.size() - 1] << el;

    // int n;
    // cin >> n;
    // vector<int> v(n, 3);
    // print(v);

    // vector<int> v = {1, 2, 3, 4, 5};
    // cout << v.empty() << el; // False
    // v.clear();
    // cout << v.empty() << el; // True

    // int n;
    // cin >> n;
    // vector<int> v;
    // v.assign(n, 3);
    // print(v);
    // v.resize(5);
    // print(v);
    // cout << v.size() << endl;

    // vector<int> v = {2, 3, 5, 6, 4, 7};
    // auto it = v.begin();
    // auto ite = --v.end();
    // cout << *it << " " << *ite << endl;

    // vector<int> v = {2, 3, 5, 6, 4, 7};
    // printWithIt(v);

    // vector<int> v = {2, 3, 5, 6, 4, 7};
    // reverse(v.begin(), v.end());
    // printWithIt(v);

    // vector<int> v = {2, 3, 5, 6, 4, 7};
    // sort(v.begin(), v.end());
    // printWithIt(v);

    // vector<int> v = {2, 3, 5, 6, 4, 7};
    // auto min = min_element(v.begin(), v.end());
    // auto max = max_element(v.begin(), v.end());
    // cout << *min << " " << *max << el;

    // int minIndex = min - v.begin();
    // int maxIndex = max - v.begin();
    // cout << "Min index: " << minIndex << ", Max index: " << maxIndex << el;

    return 0;
}