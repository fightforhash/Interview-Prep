#include <iostream>
using namespace std;
long long dp[103];
long long ready[103];
long long arr[103];

long long solve(long long k){
    if (k <= 0) return 0;
    
    if (ready[k]) return dp[k];

    if (k == 1 || k == 2 || k == 3) return dp[k] = 1;
    if (k == 4 || k == 5) return dp[k] = 2;

    ready[k] = true;

    return dp[k] = solve(k - 1) + solve(k - 5);
   
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    long long t;
    cin >> t;

    for (long long i = 0; i < t; i++){
        cin >> arr[i];
    }

    for (long long i = 0; i < t; i++){
        cout << solve(arr[i]) << '\n';
    }

}