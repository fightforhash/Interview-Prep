#include <iostream>
using namespace std;
const int p = 1e6 + 3;
int dp[p];
int ready[p];
int b;

int solve(int k){
    if (k > b) return 1e9;

    if (k == b){
        return 0;
    }
    
    if (ready[k]) return dp[k];
    ready[k] = true;

    return dp[k] = min(solve(k + 1) + 1, solve(k * 2) + 1);

}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int a;
    cin >> a >> b;

    cout << solve(a);

}