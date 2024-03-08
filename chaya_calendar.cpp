#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define      HeHe     return 0
#define      YES      cout << "YES\n"
#define      NO       cout << "NO\n"
#define      end         '\n'

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

        vector<int> signs(n);
        for (int &i : signs)   cin >> i;
          
        int current = 0;
        for (int x : signs)
        {
            current += x - current % x;
        }
        cout << current << end;
    }
    HeHe;
}