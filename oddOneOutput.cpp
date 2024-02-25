#include <iostream> //!  ACCEPTED
using namespace std;

int main()
{
    int t;
    cin >> t;

    int a, b, c;
    int result;

    while (t--)
    {
        cin >> a >> b >> c;
        result = a ^ b ^ c;
        cout << result << endl;
    }

    return 0;
}