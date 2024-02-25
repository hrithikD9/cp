#include <bits/stdc++.h> //! ACCEPTED
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string card;
        cin >> card;

        if (card == "bca" || card == "cab")
        {
            cout << "NO"
                 << "\n";
        }

        else
        {
            cout << "YES"
                 << "\n";
        }
    }
    return 0;
}