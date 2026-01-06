#include <iostream>
using namespace std;
const int p = 1e6 + 3;
int dp[p];
int ready[p];

int solve(int k){
    
    if (k == 1){
        return 1;
    }
    if (k == 2){
        return 2;
    }

    if (ready[k]) return dp[k];
    ready[k] = true;

    return dp[k] = (solve(k - 1) + solve(k - 2)) % 15746;

}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;

    cout << solve(n);

}