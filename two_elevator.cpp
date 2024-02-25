#include<iostream>  //! ACCEPTED
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int first_elevator = abs(a-1);
        int second_elevator = abs(b-c) + (c-1);

        int ans = 0;
        if(first_elevator < second_elevator) ans += 1;
        else if(first_elevator > second_elevator) ans += 2;
        else ans+= 3;

        cout << ans << "\n";

    }


    return 0;
}