#include <bits/stdc++.h> //!  ACCEPTED
using namespace std;

int main()
{

    string name;
    cin >> name;

    int count = 0;

    for (int i = 0; i < name.size(); ++i)
    {
        for (int j = i + 1; j < name.size(); ++j)
        {
            if (name[i] == name[j])
            {
                count++;
                break;
            }
        }
    }

    int distinct_num = name.size() - count;

    if (distinct_num % 2 == 1)
    {
        cout << "IGNORE HIM!";
    }

    else
    {
        cout << "CHAT WITH HER!";
    }

    return 0;
}