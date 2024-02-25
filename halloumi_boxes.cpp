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
        int n, k;
        cin >> n >> k;

        vector<int> box(n);
        for (auto &i : box)
            cin >> i;

        if (is_sorted(box.begin(), box.end()) || k > 1)  cout << "YES" << "\n";
        else   cout << "NO" << "\n";
    }
    return 0;
}