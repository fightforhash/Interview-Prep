#include <iostream>
using namespace std;
int arr[504][504];
int ready[504][504];
int dp[504][504];
int solve(int i, int j){

    if (j < 1 || j > i){
        return -1e9;
    }
    if (i == 1 && j ==1){
        return arr[i][j];
    }

    if (ready[i][j]) return dp[i][j];
    ready[i][j] = true;

    dp[i][j] = arr[i][j] + max(solve(i - 1, j - 1) ,solve(i - 1, j));
    //깔끔했네요
    return dp[i][j];

}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cin >> arr[i][j];
        }
    }
    // 파폭 터졌네요 이걸로 하고 마무리하죠
    // 값들은 전부 음이 아닌 정수죠?
    // ans 초깃값 0으로 잡으면 됩니다
    int ans = 0;
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            // 여기서 (i,j)로 내려온 경로 최댓값이 다 있으니까 이 중에 maximum 골라 출력하면 되겠죠? 
            ans = max(ans, solve(i, j));
            // 이해 되시나요?
            // 넵 마지막에 어떻게 적용하는지 몰라 헷갈렸네요 나머지는 문제 없었습니다
            // 좋습니다
            
            // 돌려볼게요
            // 7나옵니다
        }
    }
    cout << ans;
}