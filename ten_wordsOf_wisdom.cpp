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
        vector<pair<int, int>> v;

        for (int i = 0; i < n; ++i)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }

        int quality = 0, response = 0;
        for (int j = 0; j < n; ++j)
        {
            if (v[j].first <= 10 && v[j].second > quality)
            {
                response = j + 1;
                quality = v[j].second;
            }
        }
        cout << response << "\n";
    }
    return 0;
}