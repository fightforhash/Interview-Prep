#include <iostream>
using namespace std;
int dp[35][35];
int ready[35][35];

int solve(int a, int b){ //mCn
    
    if (a == b){
        return 1;
    }
    if (b == 0){
        return 1;
    }

    if (ready[a][b]) return dp[a][b];
    ready[a][b] = true;

    return dp[a][b] = solve(a - 1, b - 1) + solve(a - 1, b);
    
}

int main(){

    int t;
    cin >> t;
    int x, y;
    for (int i = 0; i < t; i++){
        cin >> x >> y;
        
        cout << solve(y , x) << '\n';
    }

} 