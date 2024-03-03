#include <bits/stdc++.h> //! ACCEPTED
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long ans = 1;
        while(ans * 2 <= n){
            ans *= 2;
        }
        cout << ans << "\n";
    }
    return 0;
}