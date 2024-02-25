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

        cout << (((n - 1) % 3 == 0 || (n + 1) % 3 == 0) ? "First" : "Second") << "\n";
    }

    return 0;
}