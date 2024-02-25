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
        string s = "codeforces";
        string ss;
        cin >> ss;

        int count = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] != ss[i])
                ++count;
        }
        cout << count << "\n";
    }
    return 0;

}