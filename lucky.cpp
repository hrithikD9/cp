#include <bits/stdc++.h> //!  ACCEPTED
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string digit;
        cin >> digit;

        int first_3 = digit.size() - 3;
        int sumF3 = 0, sumL3 = 0;

        for (int i = 0; i < first_3; ++i)
        {
            sumF3 += digit[i];
        }

        for (int i = first_3; i < digit.size(); ++i)
        {
            sumL3 += digit[i];
        }

        if (sumF3 == sumL3)
        {
            cout << "YES " << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}