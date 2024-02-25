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
        int a, b;
        cin >> a >> b;

        int x = abs(a-b);
        if(x % 2 == 0) cout << "Bob" << "\n";
        else cout << "Alice" << "\n";
    }
    return 0;
}