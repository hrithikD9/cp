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

       vector<int>arr(n);
       for(int &i : arr) cin >> i;
       for (int& val : arr)  val = abs(val); 

      int sum =  accumulate(arr.begin(), arr.end(), 0);

      cout << sum << "\n";
    }
    return 0;
}