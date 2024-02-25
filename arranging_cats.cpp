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

        string s, f;
        cin >> s >> f;

        int add = 0, remove = 0;
        for (int i = 0; i < n; ++i)
        {
            if (stoi(s.substr(i, 1)) > stoi(f.substr(i, 1)))
            {
                ++remove;
            }
            else if (stoi(s.substr(i, 1)) < stoi(f.substr(i, 1)))
            {
                ++add;
            }
        }
        cout << max(remove, add) << "\n";
    }
    return 0;
}