#include <bits/stdc++.h>//! ACCEPTED
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        
        if(n % 2 != 0 && k % 2 != 0) cout << "YES" << "\n";
        else if (n % 2 == 0) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}