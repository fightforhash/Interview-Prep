#include <iostream>
using namespace std;

int arr[100004];
int dp[100004];
int ready[100004];

int solve(int n){

    if (n == 0) return 0;
    if (ready[n]) return dp[n];
    ready[n] = true;

    int res = n;

    for (int i = 1; i * i <= n; i++){
        res = min(res, solve(n - i * i) + 1);
    }
    return dp[n] = res;

}


int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n; 
    cin >> n;

    cout << solve(n);

}