#include <iostream> //!  ACCEPTED
using namespace std;

int main()
{

    int n;
    cin >> n;

    int Petya, Vasya, Tonya;
    int tot, count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> Petya >> Vasya >> Tonya;

        tot = Petya + Vasya + Tonya;

        if (tot >= 2)
        {
            count++;
        }

        else
            continue;
    }

    cout << count;

    return 0;
}