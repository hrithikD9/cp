#include <bits/stdc++.h> //! ACCEPTED
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (auto &i : arr)
            cin >> i;

        int maxLength = 0, currentLength = 0;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] == 0)
            {
                ++currentLength;
            }

            else
            {
                maxLength = max(maxLength, currentLength);
                currentLength = 0;
            }
        }
        maxLength = max(maxLength, currentLength);

        cout << maxLength << "\n";
    }

    return 0;
}