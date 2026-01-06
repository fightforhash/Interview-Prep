#include <iostream>
using namespace std;
int arr[1004];
int dp[1004];
int ready[1004];

int solve(int k){ // dp[k] := ... a[k]로 끝나는 Longest Decreasing Sequence의 길이

    if (k < 0){}
    if (k == 0){
        return 0;
    }

    if (ready[k]) return dp[k];
    ready[k] = true;

    // 길이가 1인 LDS는 아무 조건 없이 되니까
    dp[k] = 1;
    for(int i=1; i<k; ++i) if (arr[i] > arr[k]) {
        dp[k] = max(dp[k], solve(i) + 1);
    }

    return dp[k];
}

int main(){
    cin.tie(0)->sync_with_stdio(0);

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