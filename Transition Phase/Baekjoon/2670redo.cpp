#include <iostream>
#include <iomanip>

using namespace std;
double dp[10004];
bool ready[10004];
double arr[10004];

double solve(int n){
    // dp(i) := arr[1...i]에서 suffix 중에서 곱의 최댓값

    if (n == 1){
        return arr[n];
    }
    
    if (ready[n]) return dp[n];
    ready[n] = true;

    
    dp[n] = max(arr[n], solve(n - 1) * arr[n]);
    
    
    // [1.... i-1]
    //    [p..i-1]
    
    // [1.... i-1] [i]
    
    //     nothing|[i] v
    
    //            |
    //        [i-1| i]
    //         ...|
    //   [2,....  | i]
    // [1,2,....  | i]
    //            |
    //            |
    //    [p..i-1]|[i] v
    //            |
    
    //   a[j..i-1]*a[i]
    
    
    // [2, 1, 0.3, 1.5]
    //            [1.5]: 1.5
    //       [0.3, 1.5]: 0.45
    //    [1, 0.3, 1.5]: 0.45
    // [2, 1, 0.3, 1.5]: 0.9

    return dp[n];

}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;    

    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    double mx = 0;

    for (int i = 1; i <= n; i++){
        mx = max(mx, solve(i));
    }

    cout << fixed << setprecision(3) << mx;


}

// a[1..1]의 suffix -> solve(1)
// a[1..2]의 suffix -> solve(2)
// ...
// a[1..i]의 suffix -> solve(i)
// ...
// a[1..n]의 suffix -> solve(n)


// a[1], a[2], ..., a[n]

// subarray a[l], ... , a[r]  <-  a[1...r]에서 suffix 중 하나