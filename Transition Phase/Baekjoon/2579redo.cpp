#include <iostream>
#include <vector>
using namespace std;
vector<int> dp(10003);
vector<int> ready(10003);
vector<int> arr(303);

int solve(int k){

    if (k == 1){
        return arr[0];
    }
    if (k == 2){
        return arr[0] + arr[1];
    }

    dp[0] = arr[0];
    dp[1] = arr[0] + arr[1];
    dp[2] = max(arr[0] + arr[2], arr[1] + arr[2]);

    if (ready[k]) return dp[k - 1];
    ready[k] = true;

    for (int i = 3; i < k; ++i) {
        dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);
    }

    return dp[k - 1];
    
}


int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;

    for (int k = 0; k < n; k++){
        cin >> arr[k];
    }

    cout << solve(n);

}