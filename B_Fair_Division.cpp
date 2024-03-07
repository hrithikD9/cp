#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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

        int one = 0 , two = 0;
        vector<int> candies(n);
        for(int i = 1; i <= n; i++) {
            int x;
            cin >> x;

            if(x == 1) one++;
            else two++;
        }

        if((one + (two * 2)) % 2 != 0) cout << "NO" << "\n";
        else{
            int total = (one + (two * 2)) / 2;
            if(total % 2 == 0 ||( total % 2 == 1 && one != 0)) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
    }
    return 0;
}