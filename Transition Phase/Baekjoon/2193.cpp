#include <iostream>
using namespace std;
int ready[93];
long long dp[93];
long long solve(int k){

    if (k == 1){
        return 1; 
    }
    if (k == 2){
        return 1;
    }
    
    if (ready[k]) return dp[k];
    ready[k] = true;

    dp[k] = solve(k - 2) + solve(k - 1);

    return dp[k];
}

int main(){

    int n;
    cin >> n;

    cout << solve(n);

}