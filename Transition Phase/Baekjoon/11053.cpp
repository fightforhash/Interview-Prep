#include <iostream>
using namespace std;

int arr[1004];
int dp[1004];
int ready[1004];

int solve(int i){
    
    if (i < 0){
        return 0;
    }

    if (ready[i]) return dp[i];
    ready[i] = true;

    dp[i] = 1;

    for (int j = i; j >= 1; j--){
        if (arr[j] < arr[i]) {
            dp[i] = max(dp[i], solve(j) + 1);
        }
    }
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

    cout << maxlen << '\n';

}