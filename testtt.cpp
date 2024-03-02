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

        long long sum =  accumulate(arr.begin(), arr.end(), 0);

        if(sum % 3 == 0) cout << "0" << "\n";
        else if(sum % 3 == 2) cout << "1" << "\n";
        else{
            if(sum % 3 == 1){
                cout << "1" << "\n";
            }
            else cout << "2" << "\n";
        }

    }
    return 0;
}