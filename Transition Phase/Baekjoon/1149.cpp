#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > dp(1003, vector<int>(3));
vector<vector<int> > cost(1003, vector<int>(3));
vector<vector<int> > ready(1003, vector<int>(3));

int solve(int a, int c){

    if (a == 0){
        return 0;
    }

    if (ready[a][c]) return dp[a][c];
    ready[a][c] = true;
    int best = 1e9;
    for (int j = 0; j < 3; j++){
        if (j != c){
            best = min(best, solve(a - 1, j));
        }
    }
    return dp[a][c] = best + cost[a][c];
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++){
        cin >> cost[i][0];
        cin >> cost[i][1];
        cin >> cost[i][2];        
    }
    int ans = 1e9;
    ans = min(solve(n, 0), ans);
    ans = min(solve(n, 1), ans);
    ans = min(solve(n ,2), ans);

    cout << ans;

}