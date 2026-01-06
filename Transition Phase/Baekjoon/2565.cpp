#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<pair<int, int> > wire;
vector<int> dp;
vector<bool> ready;

int solve(int i){

    if (ready[i]) return dp[i];
    dp[i] = 1;
    ready[i] = true;

    for (int k = 1; k < i; k++){
        if(wire[k].second < wire[i].second){
            dp[i] = max(dp[i], solve(k) + 1);
        }
    }

    return dp[i];

}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    wire.resize(n + 1);
    dp.assign(n + 1, 0);
    ready.assign(n + 1, false);

    for(int i = 1; i <= n; i++){
        cin >> wire[i].first >> wire[i].second;
    }

    sort(wire.begin()+ 1, wire.begin() + n + 1);

    int maxl = 0;

    for(int i =1; i <=n; i++){
        maxl = max(maxl, solve(i));
    }

    cout << n - maxl;

}  