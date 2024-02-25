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

        vector<int> chips(n);
        for (int &i : chips) cin >> i;
          
        int start = 0, end = 0;
        for (int i = 0; i < n; ++i)
        {
            if (chips[i] == 1)
            {
                start = i;
                break;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            if (chips[i] == 1)
            {
                end = i;
            }
        }

         int ans = count(chips.begin() + start, chips.begin() + end, 0); //! For a custom input 

        cout << ans << "\n";
    }
    return 0;
}