#include <bits/stdc++.h> //! ACCEPTED
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> score;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        score.push_back(x);
    }

    sort(score.begin(), score.end(), greater<>());

    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (score[i] >= score[k - 1] && score[i] > 0)
        {
            ++count;
        }
    }

    cout << count << "\n";

    return 0;
}