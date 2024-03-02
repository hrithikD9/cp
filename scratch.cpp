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
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }

        int maxi = arr[0];
        for (int i = 0; i < n; i++)
        {
            int mx = arr[i + 1] / 2;
            if (mx > maxi) maxi = mx;
            else maxi = 1;
            swap(arr[i], arr[maxi]);
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                ans = i;
                break;
            }
        }
        cout << ans + 1 << "\n";
    }
    return 0;
}