#include <bits/stdc++.h> //? ACCEPTED
using namespace std;

using ll = long long;

#define HeHe return 0
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        vector<vector<char>> v;
        for (int i = 0; i < 3; i++)
        {
            vector<char> row;
            for (int j = 0; j < 3; j++)
            {
                char x;
                cin >> x;
                row.push_back(x);
            }
            v.push_back(row);
        }

        int count_A = 0, count_B = 0, count_C = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (v[i][j] == 'A') count_A++;
                if (v[i][j] == 'B') count_B++;
                if (v[i][j] == 'C') count_C++;
            }
        }

        if(count_A < 3) cout << "A" << nl;
        if(count_B < 3) cout << "B" << nl;
        if(count_C < 3) cout << "C" << nl;
    }
    HeHe;
}