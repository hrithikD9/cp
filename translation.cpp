#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string t;
    getline(cin, t);

    for (char &c : s)
        c = tolower(c);
    for (char &c : t)
        c = tolower(c);

    reverse(s.begin(), s.end());

    if (s == t)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }

    return 0;
}