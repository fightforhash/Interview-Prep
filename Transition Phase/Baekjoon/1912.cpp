#include <iostream>
using namespace std;
int arr[100004];
int dp[100004];
int ready[100004];

int solve(int k){
    if (k < 0){
        return 0;
    }
    if (ready[k]) return dp[k];
    
    ready[k] = 1;
    dp[k] = max(solve(k - 1) + arr[k] , arr[k]); 

    return dp[k];  
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        ready[i] = 0;
    }
    int ans = -1e9;

    for (int i = 0; i < n; i++){
        ans = max(solve(i), ans);
    }

    cout << ans;


}