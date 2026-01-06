#include <iostream>
using namespace std;

int arr[10004];
int dp[10004];
int ready[10004];

int solve(int i){

    if (i == 0){
        return 0;
    }
    if (i == 1){
        return arr[1];
    }
    if (i == 2){
        return arr[1] + arr[2];
    }

    if (ready[i]) return dp[i];
    ready[i] = true;
            //1. i 번째 잔 마심 2. i번째 잔 마시고 i - 1은 안 마시는 경우 3. i와 i - 1번째 잔을 마시고 i - 2 번째 잔만 안마시는 경우
    dp[i] = max(solve(i - 1), max(arr[i] + solve(i - 2), arr[i] + arr[i - 1] + solve(i - 3)));

    return dp[i];

}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    int maxlen = 0;

    for (int i = 1; i <= n; i++){
        maxlen = max(maxlen, solve(i));
    }

    cout << maxlen;

}