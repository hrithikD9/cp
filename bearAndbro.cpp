#include <iostream> //!  ACCEPTED
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int year = 0;

    while (a <= b)
    {
        year++;

        a = a * 3;
        b = b * 2;
    }

    cout << year;

    return 0;
}