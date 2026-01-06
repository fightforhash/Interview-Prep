#include <iostream>
#include <iomanip>
using namespace std;

double arr[10004];
double dp[10004];
double ready[10004];

double solve(int b){
    dp[1] = arr[1];

    for (int i = 2; i <= b; i++){
        dp[i] = max(arr[i], dp[i - 1] * arr[i]);
    }

    double maxv = dp[1];
    for (int i = 2; i <= b; i++){
        maxv = max(maxv, dp[i]);
    }

    return maxv;
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;


    cin >> n;

    for (int i = 1; i <=n; i++){
        cin >> arr[i];
    }

    cout << fixed << setprecision(3) << solve(n);



}