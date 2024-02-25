#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<char, int> pairs;
        for (int i = 97; i <= 122; ++i) // Here (97 - 122) are ASCII Values
        {
            pairs[i] = 0; // Initializes all character with 0 -> (a = 0 , b = 0 ....)
        }

        vector<int> trace(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> trace[i]; // Taking user inputs

            for (auto itr : pairs) /// Iterating through elements of map .
            {
                if (itr.second == trace[i]) //? Checking the user input with the value of maps
                {
                    cout << itr.first;
                    pairs[itr.first]++; ////? Incrementing the character value from 0 to +1 each time after printing it
                    break;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}