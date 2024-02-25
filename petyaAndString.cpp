#include <bits/stdc++.h> //!  ACCEPTED
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    for (char &c : s1)
        c = tolower(c);
    for (char &c : s2)
        c = tolower(c);

    if (s1 < s2)
    {
        cout << "-1";
    }

    if (s2 < s1)
    {
        cout << "1";
    }

    if (s1 == s2)
    {
        cout << "0";
    }

    return 0;
}