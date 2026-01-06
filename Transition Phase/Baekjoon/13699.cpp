#include <iostream>
using namespace std;
typedef long long ll;
ll dp[70];

void solve(int k){

    dp[0] = 1;
    
    for (ll i = 1; i <= k; i++) {
        for (ll j = 0; j < i; j++) {
            dp[i] += dp[j] * dp[i - j - 1];
        }
    }

}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    ll n;
    cin >> n;

    solve(n);

    cout << dp[n];

}