using namespace std; //!  ACCEPTED
#include <iostream>

int main()
{
    int t;
    cin >> t;

    int a, b, c;

    while (t--)
    {
        cin >> a >> b >> c;

        if (a + b == c)
        {
            cout << "+" << endl;
        }

        if (a - b == c)
        {
            cout << "-" << endl;
        }
    }

    return 0;
}