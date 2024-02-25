#include <bits/stdc++.h> //! ACCEPTED
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int stone = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == s[i + 1])
        {
            ++stone;
        }
    }
    cout << stone;

    return 0;
}