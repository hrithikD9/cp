#include <bits/stdc++.h>
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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count = 0, op = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                count++;
                op++;
            }

            else count = 0;
            
            if (count >= 3) break;
        }

        if (count >= 3)  cout << 2 << nl;
        else cout << op << nl;
    }
    HeHe;
}