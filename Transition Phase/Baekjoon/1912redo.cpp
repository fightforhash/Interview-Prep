#include <iostream>
using namespace std;
int arr[100004];
int dp[100004];
int ready[100004];

int solve(int k){

    if (k == 0){
        return -1e9;
    }
    if (k == 1){
        return arr[1];
    }

    if (ready[k]) return dp[k];
    ready[k] = true;


    dp[k] = max(arr[k], solve(k - 1) + arr[k]);

    return dp[k];

}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    int ans = -1e9;
    for (int i = 1; i <= n; i++){
        ans = max(ans, solve(i));
    }

    cout << ans;

}