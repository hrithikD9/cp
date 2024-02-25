#include <bits/stdc++.h> //! ACCEPTED
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> distinct_numbers(3);
        for(auto &i : distinct_numbers) cin >> i;

        sort(distinct_numbers.begin() , distinct_numbers.end());

        cout << distinct_numbers.at(1) << "\n";
    }
    return 0;
}