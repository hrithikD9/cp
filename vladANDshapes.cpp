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
        long long n;
        cin >> n;

        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            for (int j = 0; j < n; j++)
            {
                a[i][j] = s[j] - '0'; // converting string to int and storing it 
            }
        }

        int prev = 0;
        for (int i = 0; i < n; i++)
        {
            int current = 0;
            for (int j = 0; j < n; j++)
            {
                current += a[i][j];
            }
            if (prev != 0)
            {
                if (prev == current)
                {
                    cout << "SQUARE"  << "\n";
                    break;
                }

                else
                {
                    cout << "TRIANGLE" << "\n";
                    break;
                }
            }
            prev = current;
        }
    }
    return 0;
}