#include <iostream>
#include <vector>
using namespace std;
vector<long long> dp(70);
vector<long long> ready(70);
long long solve(long long k){ // solve(k) := dp[k]의 올바른 값을 반환하는 함수
    if (k == 0) return 1;
    if (ready[k]) return dp[k];
    ready[k] = true;
    
    for (long long i = 0, j = k-1; i <= k-1; i++, j--){
        // dp[k] = dp[0] * dp[k - 1] <- i=0,j=k-1
        //       + dp[1] * dp[k - 2] <- i=1,j=k-2
        //       + dp[2] * dp[k - 3]
        //       + dp[3] * dp[k - 4]
        //       ...
        //       + dp[k-1] * dp[0]
        dp[k] += solve(i) * solve(j);
    }
    return dp[k];
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    long long n;
    cin >> n;

    cout << solve(n);



}