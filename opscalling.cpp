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
       int n;
       cin >> n;

       for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((i + j) % 2 == 0) cout << "##";
            else cout << "..";
        }
        cout << "\n";
        for(int j = 0; j < n; j++){
            if((i + j) % 2 == 0) cout << "##";
            else cout << "..";
        }
        cout << "\n";
       }
    }
    HeHe;
}