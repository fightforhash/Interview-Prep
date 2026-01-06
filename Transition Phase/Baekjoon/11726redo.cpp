#include <iostream>
#include <vector>
using namespace std;

vector<int> dp(1003);
vector<int> ready(1003);

int solve(int k){
    if (k < 0) return 0;
    if (k == 0) return 1;
    
    if (ready[k]) return dp[k];
    ready[k] = true;
    
    return dp[k] = (solve(k-1) + solve(k-2) * 2) % 10007;
}

int main(){

    int n;
    cin >> n;

    cout << solve(n);

}