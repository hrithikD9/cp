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

        vector<int>arr(n);
        for(int &i : arr) cin >> i;

        int sum = accumulate(arr.begin(), arr.end(), 0);

        if(sum % 2 == 0) YES;
        else NO;
    }
    HeHe;
}