#include <bits/stdc++.h> //! ACCEPTED
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> present;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            present.push_back(x);
        }

        auto &product = *min_element(present.begin(), present.end());
        product += 1;

        int count = 1;
        for (auto element : present)
        {
            count *= element;
        }
        cout << count << "\n";
    }

    return 0;
}
