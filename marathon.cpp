#include<bits/stdc++.h>//! ACCEPTED
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        vector<int>participants(4);
        for(auto &i : participants) cin >> i;

        int count = 0;
        for(int i = 1; i < participants.size(); ++i){
            if(participants[0] < participants[i]) ++count;
        }
        cout << count << "\n";
    }

    return 0;
}