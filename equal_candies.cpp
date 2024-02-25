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

        vector<int> box(n);
        for (auto &i : box) cin >> i;
            
        int mini = *min_element(box.begin(), box.end());
        
        int candies = 0 , sum;
        for(int i = 0; i < box.size(); ++i){
            sum = box[i] - mini;
            candies += sum;
        }
        cout << candies << "\n";
    }

    return 0;
}