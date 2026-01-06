#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> dp(5003 , -1);
int inf = 9999999;

void solve(int k){

    if (k < 0){
        return;
    }
    if (k == 0){
        dp[k] = 0;
        return;
    }
    if (dp[k] != -1){
        return;
    }

    solve(k - 3);
    solve(k - 5);

    int result1 = (k - 3 >= 0 && dp[k - 3] != -1 && dp[k - 3] != inf) ? dp[k - 3] + 1 : inf;
    int result2 = (k - 5 >= 0 && dp[k - 5] != -1 && dp[k - 5] != inf) ? dp[k - 5] + 1 : inf;


    dp[k] = min(result1, result2);
}


int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;

    solve(n);

    if (dp[n] >= inf){
        cout << -1;
    }else{
        cout << dp[n];
    }

    return 0;
}