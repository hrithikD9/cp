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
        map<int, int> mpp;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i]; // adding all elements
            mpp[arr[i] % 3]++; // mapping all elements with remainder
        }

        if (sum % 3 == 0) cout << "0" << "\n"; // if there no remainder then it always zero
        else if (sum % 3 == 2)  cout << "1" << "\n"; // if the remainder is 2 then we can add (+1) so that it mod by 3 .
        else if (sum % 3 == 1 && mpp[1] > 0) cout << "1" << "\n"; // another is mod 1 and any of the element is 1 then also same
        else cout << "2" << "\n"; // remaining all is equivalent to 2
    }
    return 0;
}