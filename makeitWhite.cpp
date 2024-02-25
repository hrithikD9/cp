#include <iostream>//! ACCEPTED
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int start = 0, end = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'B')
            {
                start = i;
                break;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'B')  end = i;
        }
        cout << (end - start + 1) << "\n";
    }
    return 0;
}