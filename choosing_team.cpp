#include <bits/stdc++.h> //! ACCEPTED
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    vector<int> students(n);
    for (auto &i : students) cin >> i;
        
    sort(students.begin(), students.end());

    int count = 0;
    for (auto i : students)
    {
        if (i + k <= 5)
        {
            ++count;
        }
    }

    cout << (count / 3) << "\n";

    return 0;
}
