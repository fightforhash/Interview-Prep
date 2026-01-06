#include <iostream>
using namespace std;
int dp[1003];
void solvetile(int k){
/*
    if (k == 1){
        dp[1] = 1;
        return;
    }
    if (k == 2){
        dp[2] = 2;
        return;
    }
*/
    if (k >= 1){
        dp[1] = 1;
    }
    if (k >= 2){
        dp[2] = 3;
    }

    for (int i = 3; i <= k; i++){
        dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;
    }

}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;
    solvetile(n);

    cout << dp[n];

}