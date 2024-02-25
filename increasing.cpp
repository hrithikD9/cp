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
        int n;
        cin >> n;

        vector<int> elements(n);
        for (int &i : elements)  cin >> i;
           
        sort(elements.begin(), elements.end());

        bool check = true;
        for (int i = 0; i < elements.size() - 1; ++i)
        {
            if (elements[i] >= elements[i + 1])
            {
                check = false;
                break;
            }
        }
        cout << ((check) ? "YES" : "NO");
        cout << "\n";
    }
    return 0;
}
