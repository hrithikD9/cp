#include <bits/stdc++.h>//! ACCEPTED
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        char arr[8][8];
        for (int i = 0; i < 8; ++i)
            for (int k = 0; k < 8; ++k)
                cin >> arr[i][k];

        char temp[8];
        int b = 0;

        for (int i = 0; i < 8; ++i)
            for (int k = 0; k < 8; ++k)
                if (arr[i][k] >= 'a' && arr[i][k] <= 'z')
                    temp[b++] = arr[i][k];

        for (int i = 0; i < b; ++i)
            cout << temp[i];

        cout << "\n";
    }

    return 0;
}
