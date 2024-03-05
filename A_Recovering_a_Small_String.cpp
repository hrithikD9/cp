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
            for (int j = 1; j <= 26; j++)
            {
                pairs[i] = j; // Initializes all character with 0 -> (a = 0 , b = 0 ....)
            }
        }

        for (auto i : pairs)
        {
            cout << i.first << " " << i.second << " " << endl;
            ;
        }
    }
    return 0;
}