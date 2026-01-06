#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > dp(1004, vector<int>(3));
vector<vector<int> > cost(1004, vector<int>(3));
vector<vector<int> > ready(1004, vector<int>(3));

int solve(int t, int c){

    if (t == 0){
        return 0;
    }

    if (ready[t][c]) return dp[t][c];
    ready[t][c] = true;
    int best = 1e9;
    for (int i = 0; i < 3; i++){
        if (i != c){
            best = min(best, solve(t - 1, i));
        }
    }
    return dp[t][c] = best + cost[t][c];

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