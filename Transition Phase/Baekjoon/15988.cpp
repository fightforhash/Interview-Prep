#include <iostream>
using namespace std;
const long long sex = 1e9 + 9;
const long long p = 1e6 + 3;
long long dp[p];
long long ready[p];

long long solve(long long k){
    if (k < 0){
        return 0;
    }
    if (k == 0){
        return 1;
    }

    if (ready[k]) return dp[k];
    ready[k] = 1;

    dp[k] = (solve(k - 1) + solve(k - 2) + solve(k - 3)) % sex;
    
    return dp[k];
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    long long n;
    cin >> n;
    long long t;

    for (long long i = 0; i < n; i++){
        cin >> t;
        cout << solve(t) % sex << '\n';
    }
    return 0;
}