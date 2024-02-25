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
        string ab;
        cin >> ab;

        bool check = false;
        for (int i = 1; i < ab.length(); ++i)
        {
            if (ab[i] != '0' && stoi(ab.substr(0, i)) < stoi(ab.substr(i)))
            {
                cout << ab.substr(0, i) << " " << ab.substr(i) << "\n";
                check = true;
                break;
            }
        }
        if (!check)
        {
            cout << "-1" << "\n";
        }
    }
    return 0;
}