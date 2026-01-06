#include <iostream>
#include <algorithm>
using namespace std;
const int k = 1e6 + 3;
int dp[k];
int ready[k]; 
void solve(int n){

    if (n == 1){
        return;
    }
    if (ready[n]){
        return;
    }
    ready[n] = true;
    
    dp[n] = 1e9;
    
    if (n % 3 == 0){
        solve(n / 3);
        dp[n] = min(dp[n], dp[n / 3] + 1);
    }
    if (n % 2 == 0){
        solve(n / 2);
        dp[n] = min(dp[n], dp[n / 2] + 1);
    }
    solve(n - 1);
    dp[n] = min(dp[n], dp[n - 1] + 1);
    
    //dp[n] = min(dp[n /3] + 1, dp[n / 2] + 1, dp[n - 1] + 1);
    // dp[n]이 올바르게 계산되었을 때 리턴하고 끝내주는 함수. (당연히 ready[n]도 true가 된 상태로 반환됨.)
}


int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;

    cin >> n;

    solve(n);
    cout << dp[n];

}