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
        for (int &i : arr) cin >> i;

        int count = 0;
       for(int i = 0; i < arr.size(); i++){
        int sum = accumulate(arr.begin(), arr.end(), 0);
        arr.pop_back();

        if(sum % 3 == 0){
            break;
        }
        else{
            arr[i]++;
        }
        count ++;
       }
       cout << count << "\n";
          
    }
    return 0;
}