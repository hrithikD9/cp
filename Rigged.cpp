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

        vector<pair<int, int>> athletes;
        for (int i = 0; i < n; ++i)
        {
            int a, b;
            cin >> a >> b;
            athletes.push_back({a, b});
        }

        bool check = true;
        for (int i = 1; i < n; ++i)
        {
            if (athletes[i].first >= athletes[0].first && athletes[i].second >= athletes[0].second)
            {
                check = false;
                break;
            }
        }

        if(check == false) cout << "-1" << "\n";
        else cout << athletes[0].first << "\n";
    }
    return 0;
}
