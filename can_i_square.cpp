#include <bits/stdc++.h>    //!  ACCEPTED
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long total_squares = 0, build_squares;
        cin >> n;

        vector<int> squares(n);

        for (int i = 0; i < n; i++)
        {
            cin >> squares[i];
            total_squares += squares[i];
        }

        build_squares = sqrt(total_squares);

        if (build_squares * build_squares == total_squares)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
