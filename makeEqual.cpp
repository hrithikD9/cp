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
        int n;
        cin >> n;

        vector<int>vessels(n);
        for(int &i : vessels) cin >> i;

        int k = accumulate(vessels.begin(), vessels.end(), 0) / n;

        bool check = true;
        for( int i = 0; i < n; i++){
            if(vessels[i] < k){
                check = false;
                break;
            }
            vessels[i+1] += vessels[i] - k;
            vessels[i] = k;
        }
        cout << ((!check) ? "NO" : "YES") << "\n";
    }
    return 0;
}