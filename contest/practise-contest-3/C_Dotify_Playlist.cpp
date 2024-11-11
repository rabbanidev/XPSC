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
        int n, k, l;
        cin >> n >> k >> l;

        vector<int> songs;

        for (int i = 0; i < n; i++)
        {
            int m, lang;
            cin >> m >> lang;
            if (lang == l)
            {
                songs.push_back(m);
            }
        }

        if (songs.size() < k)
        {
            cout << -1 << el;
            continue;
        }

        sort(songs.begin(), songs.end(), greater<int>());

        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += songs[i];
        }

        cout << sum << el;
    }

    return 0;
}
