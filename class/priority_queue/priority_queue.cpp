#include <bits/stdc++.h>
#define el "\n"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // priority_queue<int> pq; // Non-Increasing priority queue (Decending)
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(1);
    pq.push(3);
    pq.push(2);
    pq.push(4);

    // cout << pq.top() << el;
    // pq.pop();
    // cout << pq.top() << el;
    // cout << pq.size() << el;
    // cout << pq.empty() << el;

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}