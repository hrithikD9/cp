#include <bits/stdc++.h>
using namespace std;
 
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
 
        vector<int> arr(n);
        for(int &i : arr) cin >> i;
 
        sort(arr.begin(),arr.end());
 
       cout << abs(arr[0] - arr[n - 1]) + abs(arr[n - 1] - arr[1]) + abs(arr[1] - arr[n - 2])+ abs(arr[n-2] - arr[0]) << "\n";
    }
    return 0;
}