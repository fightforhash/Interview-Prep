#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> dp(1004);

int max_profit(int N, vector<pair<int, int> >& schedules) {
    
    for (int i = N - 1; i >= 0; --i) {
        int Ti = schedules[i].first;  
        int Pi = schedules[i].second;         
        
        dp[i] = dp[i + 1];
        
        if (i + Ti <= N) {
            dp[i] = max(dp[i], Pi + dp[i + Ti]);
        }
    }

    return dp[0]; 
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int N;
    cin >> N;

    vector<pair<int, int> > schedules(N);

    for (int i = 0; i < N; ++i) {
        cin >> schedules[i].first >> schedules[i].second;
    }

    cout << max_profit(N, schedules) << endl;

    return 0;
}