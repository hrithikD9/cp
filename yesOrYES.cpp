#include <iostream> //!  ACCEPTED
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s == "YES" || s == "YEs" || s == "Yes" || s == "yes" || s == "yEs" || s == "yeS" || s == "yES" || s == "YeS")
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