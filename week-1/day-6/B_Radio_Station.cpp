#include <bits/stdc++.h>
#define el "\n"

using namespace std;

string findIpName(vector<pair<string, string>> arr, string targetIp)
{
    for (auto [name, ip] : arr)
    {
        if (ip == targetIp)
        {
            return name;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<pair<string, string>> arr1;
    for (int i = 0; i < n + m; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        arr1.push_back({s1, s2});
    }

    vector<pair<string, string>> arr2, arr3;
    for (int i = 0; i < n; i++)
    {
        arr2.push_back({arr1[i].first, arr1[i].second});
    }

    for (int i = n; i < n + m; i++)
    {
        arr3.push_back({arr1[i].first, arr1[i].second});
    }

    for (auto [name, ip] : arr3)
    {
        string targetIp = ip.substr(0, ip.size() - 1);
        string resName = findIpName(arr2, targetIp);

        cout << name << " " << ip << " " << "#" << resName << el;
    }

    return 0;
}
