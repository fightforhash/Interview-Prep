#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int cnt[1010] = {}; 
    int ans = 0;
    cin.tie(0) -> sync_with_stdio(0);
    int n , x;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x;
        cnt[x]++;
    }

    for (int i = 1; i <= 1000; i++){
        ans += min(cnt[i], 2);
    }

    cout << ans;

}