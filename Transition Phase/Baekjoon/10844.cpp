#include <iostream>
using namespace std;
int dp[104][10];
int ready[104][10];
const int mod = 1e9;

int solve(int k, int j){
    if (j < 0 || j > 9) return 0;
    if (k == 1) return j == 0 ? 0 : 1;
    
    if (ready[k][j]) return dp[k][j];
    ready[k][j] = true;

    dp[k][j] = (solve(k - 1, j - 1) + solve(k - 1, j + 1)) % mod;

    return dp[k][j];

}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;

    int t = 0;

    for (int i = 0; i <= 9; i++){
        t = (t + solve(n, i)) % mod;
    }

    cout << t;

}