#include <bits/stdc++.h> //! ACCEPTED
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> bags(n);
        for (auto &i : bags)  cin >> i;

        int Mihai_candies = 0, Bianca_candies = 0;
        for (auto &i : bags)
        {
            if (i % 2 == 0) Mihai_candies += i;

            else Bianca_candies += i;
        }

        if(Mihai_candies > Bianca_candies) cout << "YES" << "\n";

        else cout << "NO" << "\n";
    }
    return 0;
}