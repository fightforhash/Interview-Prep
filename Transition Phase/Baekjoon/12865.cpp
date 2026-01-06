#include <iostream>
using namespace std;
int w[104];
int v[104];
int dp[104][104000]; // dp[i][j] := 1..i까지에서 물건을 골랐을 때 물건들의 가치 합이 j일때 물건들의 무게 합의 최솟값
int ready[104][104000];
const int INF = 1e9;

int solve(int i, int j){

    if (i == 0) {
        if (j == 0) return 0;
        return INF;
    }
    if (j < 0) return INF;
    if (j == 0) return 0;
    
    if (ready[i][j]) return dp[i][j];
    ready[i][j] = 1;

    dp[i][j] = min(solve(i - 1, j), solve(i - 1, j - v[i]) + w[i]);

    return dp[i][j];
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n, k;

    cin >> n >> k;

    int ans = 0;
    for (int i = 1; i <= n; i++){
        cin >> w[i] >> v[i];
    }   

    
    for (int j = 0; j <= n * 1000; j++){
        if (solve(n, j) <= k){
            ans = max(ans, j);
        }        
    }

    cout << ans;

}