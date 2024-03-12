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

       string s;
       cin >> s;

       int count = 0;

       for( int i = 0; i < n - 2; i++){
        if( s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e' ){
            count++;
            i += 2;
        }

        if(i+4<n && s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && s[i+3]=='i' && s[i+4]=='e'){
            count++;
            i += 4;
        }

        else if(s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p'){
            count++;
            i += 2;
        }
       }
       cout << count << nl;
    }
    HeHe;
}