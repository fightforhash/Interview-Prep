#include <iostream>
using namespace std;
int dp[202][202];
bool ready[202][202];
int arr[202][202];
const int mod = 1e9;

int solve(int k, int n){ // dp(k,n):=k개의수의합이 n이되도록하는 방법의수 / dp(k-1,n-i)를 이용해서 새로운 수 i를 추가한 경우 따져주기

    if (k == 0){
        if (n == 0){
            return 1;
        }else{
            return 0;
        }
    }

    if (ready[k][n]) return dp[k][n];
    ready[k][n] = true;
    
    for (int i = 0; i <= n; i++){
        dp[k][n] += solve(k - 1, n - i);
        dp[k][n] %= mod;
    }

    return dp[k][n] % mod;

}
int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n, k;
    cin >> n >> k;

    cout << solve(k, n);
}

// window: mingw gcc 설치
// mac: homebrew 이용한 터미널에서 설치