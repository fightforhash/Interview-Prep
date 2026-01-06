#include <iostream>
#include <cstring>
using namespace std;

int dp[10004][4];
int ready[10004][4];

int solve(int n ,int last){
    
    if (n < 0) return 0;
    if (n == 0) return 1;
    
    if (ready[n][last]) return dp[n][last];
    ready[n][last] = 1;
    dp[n][last] = false;

    for (int i = last; i <= 3; i++){
        dp[n][last] += solve(n - i, i);
    }

    return dp[n][last];
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int t;
    
    cin >> t; 
    
    for (int i = 1; i <= t; i++){
        int n;
        cin >> n;

        memset(dp, 0, sizeof(dp));
        memset(ready, 0, sizeof(ready));

        cout << solve(n, 1) << '\n';
    }


}
