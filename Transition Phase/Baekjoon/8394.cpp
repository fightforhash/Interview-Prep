#include <iostream>
#include <vector>
const int maxi = 1e7 + 3;
int dp[maxi];
using namespace std;

int main(){

    int n;
    cin >> n;
    
    dp[1] = 1;
    dp[2] = 2;
    for(int k=3; k<=n; ++k){
        dp[k] = dp[k-1] + dp[k-2];
        dp[k] %= 10;
    }

    cout << dp[n];

}