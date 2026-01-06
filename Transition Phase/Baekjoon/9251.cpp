#include <iostream>
#include <string>
using namespace std;
string a;
string b;

int dp[1004][1004];
int ready[1004][1004];
int solve(int m, int n){

    if(m == 0 || n == 0){
        return 0;
    }

    if (ready[m][n]) return dp[m][n];
    ready[m][n] = true;

    if (a[m - 1] == b[n - 1]){
        return dp[m][n] = 1 + solve(m - 1, n - 1);
    }

    dp[m][n] = max(solve(m, n - 1), solve(m - 1, n));

    return dp[m][n];
}

int main(){

    cin.tie(0) -> sync_with_stdio(0);

    cin >> a;
    cin >> b;

    int x = a.size();
    int y = b.size();
    
    cout << solve(x, y);

    return 0;

}