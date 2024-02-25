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
        string s;
        cin >> s;

        int count_plus = 0, count_minus = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '-')  ++count_plus;
            else  ++count_minus;
        }
        cout << abs(count_plus - count_minus) << "\n";
    }

    return 0;
}