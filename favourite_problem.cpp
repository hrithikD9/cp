#include <bits/stdc++.h> //! ACCEPTED
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        for (auto &c : s) c = tolower(c);
            
        int alphabets = 0;
        for (auto i = 0; i < s.size(); ++i)
        {
            char x = s[i];

            int ascii_value = int(x);

            if (ascii_value > alphabets)  alphabets = ascii_value;
        }

        cout << alphabets - 'a' + 1 << "\n";
    }

    return 0;
}