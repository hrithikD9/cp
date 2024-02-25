#include <bits/stdc++.h> //! ACCEPTED
using namespace std;

int main()
{
    int t;
    cin >> t;

    string letter = "codeforces";
    while (t--)
    {
        char c;
        cin >> c;

        bool result = count(letter.begin() , letter.end(), c);

        if(result) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}
