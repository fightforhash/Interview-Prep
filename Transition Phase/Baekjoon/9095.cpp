#include <iostream>
#include <vector>
using namespace std;

vector<bool> ready(12);
vector<int> dp(12);
int countsum(int a){
    if (a == 0) return 1;
    if (a == 1) return 1;
    if (a == 2) return 2;
    if (ready[a]) return dp[a];
    ready[a] = true;
    dp[a] = countsum(a - 1) + countsum(a - 2) + countsum(a - 3);
    return dp[a];
}

// void solve(int a) {
//     // dp[a]를 계산 완료한 상태로 함수를 종료해준다
    
//     solve(a-1), solve(a-2), solve(a-3);
//     dp[a] = dp[a-1] + dp[a-2] + dp[a-3];
// }


// int countsum(int a) {
//     // dp[a]를 계산 완료한 상태로 dp[a]의 값을 리턴해준다
//     if (ready[a]) return dp[a];
//     // ...
//     dp[a] = countsum(a-1) + countsum(a-2) + countsum(a-3);
    
//     return dp[a];
// }


int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;

    vector<int> arr(n + 1);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        cout << countsum(arr[i]) << '\n';
    }


}