#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T; // Number of test cases

    while (T--)
    {
        string S;
        cin >> S; // Read the string

        int count_a = 0, count_b = 0;

        // Count occurrences of 'a' and 'b'
        for (char c : S)
        {
            if (c == 'a')
            {
                count_a++;
            }
            else if (c == 'b')
            {
                count_b++;
            }
        }

        // Length of the largest good subsequence
        int result = 2 * min(count_a, count_b);
        cout << result << '\n'; // Output the result for the test case
    }

    return 0;
}
