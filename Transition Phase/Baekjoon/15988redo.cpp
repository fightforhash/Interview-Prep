#include <iostream>
using namespace std;
const long long r = 1e6 + 4;
long long dp[r];
long long ready[r];
long long arr[r];

long long solve(long long k){

    if (k == 1){
        return 1;
    }
    if (k == 2){
        return 2;
    }
    if (k == 3){
        return 4;
    }

    if (ready[k]) return dp[k];
    ready[k] = true;

    dp[k] = solve(k - 1) + solve(k - 2) + solve(k - 3);
    dp[k] %= int(1e9) + 9;
    
    return dp[k];
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    long long n;
    cin >> n;

    long long t;

    for (long long i = 1; i <= n; i++){
        cin >> t;
        cout << solve(t) << '\n';
    }


}