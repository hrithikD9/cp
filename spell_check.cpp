#include <bits/stdc++.h> //! ACCEPTED
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string name = "Timur";
        sort(name.begin(), name.end());

        int n;
        string s;
        cin >> n >> s;

        sort(s.begin(), s.end());
        
        cout << (s == name ? "YES" : "NO") << endl;
    }
    return 0;
}