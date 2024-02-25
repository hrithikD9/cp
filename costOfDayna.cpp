#include <bits/stdc++.h> //! ACCEPTED
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int &x : a)
            cin >> x;
            
        cout << (count(a.begin(), a.end(), k) > 0 ? "YES" : "NO") << "\n";
    }

    return 0;
}
