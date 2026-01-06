#include <iostream>
using namespace std;

int dp[2][100004];
int ready[2][100004];
int arr[2][100004];
int solve(int i, int j){

    if (j < 0) return 0;

    if(ready[i][j]) return dp[i][j];
    ready[i][j] = 1;

    int pick1 = solve(1 - i, j - 1);  
    int pick2 = (j - 2 >= 0) ? solve(1 - i, j - 2) : 0;  

    dp[i][j] = max(pick1, pick2) + arr[i][j];

    return dp[i][j];

}
int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int t;
    cin >> t;  

    while (t--) {
        int n;
        cin >> n;  

       
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
                ready[i][j] = 0;
            }
        }
        
        int res = max(solve(0, n-1), solve(1, n-1)); 
        cout << res << '\n';
    }

    return 0;
}