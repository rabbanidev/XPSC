#include <iostream>
#include <vector>

using namespace std;

void largestEvenSumSubarray(int N, const vector<int> &A)
{
    int maxSize = 0;

    // Check all subarrays
    for (int start = 0; start < N; ++start)
    {
        int currentSum = 0;
        for (int end = start; end < N; ++end)
        {
            cout << A[end] << " ";
            currentSum += A[end];
            if (currentSum % 2 == 0)
            {
                maxSize = max(maxSize, end - start + 1);
            }
        }
        cout << endl;
    }

    // return maxSize;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        largestEvenSumSubarray(N, A);
    }

    return 0;
}
