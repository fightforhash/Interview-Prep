#include <iostream>
using namespace std;

int ready[1004];
int dp[1004];

bool solve(int k){

    if (ready[k]) return dp[k];
    ready[k] = 1;
   
    if (k >= 1 && !solve(k - 1)) dp[k] = 1;
    if (k >= 3 && !solve(k - 3)) dp[k] = 1;
    if (k >= 4 && !solve(k - 4)) dp[k] = 1;

    if(dp[k] == 0) dp[k] = 0;
    return dp[k];

}


int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++){
        dp[i] = 0;
        ready[i] = 0;
    }

    if (solve(n)){
        cout << "SK";
    }else{
        cout << "CY";
    }

}