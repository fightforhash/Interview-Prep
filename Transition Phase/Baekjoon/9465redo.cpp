#include <iostream>
using namespace std;
int arr[3][100004];
int dp[3][100004];
int ready[3][100004];

int solve(int i, int j){ 

    if (j < 0) return -1e9; 
    if (j == 0) return 0;

    if (ready[i][j]) return dp[i][j];
    ready[i][j] = true;

    int maxi = -1e9;

    maxi = max(maxi, solve(3 - i, j - 1) + arr[i][j]);
    maxi = max(maxi, solve(3 - i, j - 2) + arr[i][j]);

    dp[i][j] = maxi;
    return dp[i][j];
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int t;
    int n;
    cin >> t;
    for (int tc = 1; tc <= t; tc++){
        cin >> n;

        for (int i = 1; i <= 2; i++){
            for (int j = 1; j <= n; j++){
                cin >> arr[i][j];
                ready[i][j] = false;
            }
        }
        
        int ans = -1e9;
        for(int i = 1; i <= 2; i++){
            for (int j = 1; j <= n; j++){
                ans = max(ans, solve(i, j));
            }
        }
        cout << ans << '\n';
    }
}

/*
v...
.v..

.v..
v...

.v..
v...

v..v
.v..

v.v.
.v.v

.v.v
v.v.


dp(7,0) <- consider dp(6,1) + sticker(*) 

123456|7
?????x|*
?????o|x

dp(7,0) <- consider dp(5,1) + sticker(*)

12345|67
????x|x*
????o|xx

*/