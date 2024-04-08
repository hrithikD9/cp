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
        int n, a, b;
        cin >> n >> a >> b;
        
        if (a * n <= b * (n / 2) + a * (n % 2))  cout << a * n << endl;
        else  cout << b * (n / 2) + a * (n % 2) << endl;
    }
    HeHe;
}