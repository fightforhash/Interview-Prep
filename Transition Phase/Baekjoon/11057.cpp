#include <iostream>
#include <vector>
using namespace std;

int ready[1004][10];
int dp[1004][10];

int solve(int len, int last){
    if (len == 1){
        return 1;
    }
    
    if (ready[len][last]) return dp[len][last];
    ready[len][last] = true;

    for (int i = 0; i <= last; i++){
        dp[len][last] += solve(len - 1,i);
    }
    dp[len][last] %= 10007;
    
    return dp[len][last];
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i <= 9; i++){
        count += solve(n, i);
    }
    cout << count % 10007;

}