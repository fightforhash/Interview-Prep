#include <iostream>
using namespace std;
int dp[10004];
int ready[10004];
int value[104];
int n;
int k; 
const int maxi = 1e9;

int solve(int y){

    if (y < 0) return maxi;
    if (y == 0) return 0; 


    if (ready[y]) return dp[y];
    ready[y] = 1;
    int res = maxi;

    for (int i = 1; i <= n; i++) {
        if (y - value[i] >= 0) {
            res = min(res, solve(y - value[i]) + 1);
        }
    }
    return dp[y] = res;

}

int main(){
    
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    dp[0] = 0;

    for (int i = 1; i <=n; i++){
        cin >> value[i];
    }
    int ans = solve(k);
    if (ans >= maxi) cout << -1;
    else cout << ans;
    
}