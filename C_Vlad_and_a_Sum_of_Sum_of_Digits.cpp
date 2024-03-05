#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long> v(200005);

    v[0] = 0;
    for (long long i = 1; i < v.size(); ++i)
    {
        v[i] = v[i - 1];
        int num = i;
        while (num > 0)
        {
            v[i] += num % 10;
            num /= 10;
        }
    }

    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        cout << v[n] << "\n";
    }

    return 0;
}