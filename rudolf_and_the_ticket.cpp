#include <bits/stdc++.h> //! ACCEPTED
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
        int n , m , k;
        cin >> n >> m >> k;

        vector<int>left(n);
        for(int &i : left) cin >> i;

        vector<int>right(m);
       for(int &j : right) cin >> j;

        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(left[i] + right[j] > k){
                    continue;
                }
                else count++;
            }
        }
        cout << count << nl;
    }
    HeHe;
}