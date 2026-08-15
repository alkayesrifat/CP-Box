#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int binary_exponentiation( int base_number , long long n ){

    int ans = 1 % MOD;
    while(n > 0){ 

        if (n & 1){
            // If n is odd
            ans = 1LL * ans * base_number % MOD;
        }
        base_number = 1LL * base_number * base_number % MOD;
            
        n >>= 1; // In simple doing n = n / 2
    }

    return ans;

}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << binary_exponentiation(2, 1000000000) << '\n';

    return 0;
}
