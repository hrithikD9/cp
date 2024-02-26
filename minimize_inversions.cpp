#include <bits/stdc++.h> //! ACCEPTED
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

        map<int, int> permutation; // Declared a map name permutation 

        vector<int> a(n);
        for (int &i : a) cin >> i; // Input of the first array
            
        vector<int> b(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> b[j]; // Input of the second array

            permutation[a[j]] = b[j]; //? Mapping all elements of array (a) with (b) . Like : {(1,2),(2,3)....}
        }

        sort(a.begin(), a.end()); //?? Sorted The First Array (a) , because if we sort any of the array 
        //? inversion will be minimized

        ///? Now Printing the elements from Permutation 
        for(auto &itr : permutation) cout << itr.first << " "; 
        cout << "\n";
        for(auto &itr : permutation) cout << itr.second << " ";
        cout << "\n";
    }
    return 0;
}