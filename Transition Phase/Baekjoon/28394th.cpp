#include <iostream>
using namespace std;
const int inf = 9999999;
int ready[5004];
int dp[5004];


int solve(int k){

    if (k < 0){
        return inf;
    }
    if (k == 0){
        return 0;
    }

    if (ready[k]) return dp[k];
    ready[k] = true;   

    return dp[k] = min(solve(k - 3) + 1, solve(k - 5) + 1);

}

int main(){

    int n;
    cin >> n;

    if (solve(n) < inf){
        cout << solve(n);
    }else{
        cout << -1;
    }

}