#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define      HeHe     return 0
#define      YES      cout << "YES\n"
#define      NO       cout << "NO\n"
#define      nl         '\n'

void solve(){
        ll n;
        cin >> n;

        vector<ll>arr(n);
        for(ll &i : arr) cin >> i;

        for(int i = 0; i < n - 2; i++){

            if(arr[i] == 0) continue;
            
            else if(arr[i] < 0){
               NO;
               return;
            }
            else{
                arr[i + 1] -= 2 * arr[i];
                arr[i + 2] -= arr[i];
            }
        }

        if(arr[n - 1] == 0 && arr[n - 2] == 0 ) YES;
        else NO;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
       solve();
    }
    HeHe;
}