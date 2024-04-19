#include <bits/stdc++.h> //? Accepted
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

        vector<int> num;
        int power = 1;

        while (n > 0)
        {

            int digit = n % 10;
            
            if (digit > 0)
            {
                num.push_back((digit * power));
            }

            n /= 10;
            power *= 10;
        }

        cout << num.size() << nl;
        for (int i : num)  cout << i << " ";
        cout << nl;
    }
    HeHe;
}