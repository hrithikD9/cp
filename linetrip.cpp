#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define      HeHe     return 0
#define      YES      cout << "YES\n"
#define      NO       cout << "NO\n"
#define      nl         '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
       int n , x;
       cin >> n >> x;

       int prev_pump = 0 , minimum_vol = 0;
       for(int i = 0; i < n; i++){
        
        int p;
        cin >> p;

        minimum_vol = max((p - prev_pump) , minimum_vol);
        prev_pump = p;
       }

       minimum_vol = max(minimum_vol , (2*(x - prev_pump)));
       cout << minimum_vol << nl;
    }
    HeHe;
}