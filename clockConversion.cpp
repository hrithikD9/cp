#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define HeHe return 0
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        char delimiter = ':';

        string leftPart, rightPart;
        size_t found = s.find(delimiter);
        if (found != string::npos)
        {
            leftPart = s.substr(0, found);
            rightPart = s.substr(found + 1);
        }

        int value = stoi(leftPart);

        if (value > 12)
        {
            value = value % 12;
            leftPart = to_string(value);
            if (value < 10)
            {
                cout << "0" + leftPart + ":" + rightPart + " PM" << nl;
            }
            else cout << leftPart + ":" + rightPart + " PM" << nl;
        }
        
        else if(value == 12){
            cout << leftPart + ":" + rightPart + " PM" << nl;
        }
        
        else{
            if (value < 10)
            {
                if(value == 0){
                    value = 12;
                    leftPart = to_string(value);
                    cout << leftPart + ":" + rightPart + " AM" << nl;
                }
                else  cout << leftPart + ":" + rightPart + " AM" << nl;
            }
            else cout << leftPart + ":" + rightPart + " AM" << nl;
        }
    }
    HeHe;
}