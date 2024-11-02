#include<iostream>
#include<math.h>
using namespace std;


int main() {

    int n;
    cin >> n;


    int ans  = 0;
    // int i = 0;
    int place =1; // Start with 10^0 =1
    
    while(n != 0 ) {

        int bit  = n & 1;

        // ans = (bit * pow(10, i) ) + ans;
        
        ans=(bit*place)+ans;
        

        n = n >> 1;
        // i++;
        place *= 10; // Increment place value to 10^1, 10^2, etc.

    }

    cout<<" Answer is " << ans << endl;
    return 0;
}
