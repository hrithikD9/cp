#include <bits/stdc++.h> //!  ACCEPTED
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> welfare(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> welfare[i];
    }

    int max = welfare[0];

    for (int i = 1; i < n; ++i)
    {
        if (max < welfare[i])
        {
            max = welfare[i];
        }
    }

    int burle, count = 0;

    for (int i = 0; i < n; ++i)
    {
        burle = max - welfare[i];
        count += burle;
    }

    cout << count;

    return 0;
}