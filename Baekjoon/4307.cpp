#include <iostream>
using namespace std;
int n;
int l;
int k;
int main(){
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    while (n--){
    cin >> l >> k;
    int ans1 = 0, ans2 = 0;
    
    for (int i = 0; i < k; i ++){
        int x;
        cin >> x;
        int tmp = min(x, l - x);
        int tmpmax = max(x, l - x);
        ans1 = max(ans1, tmp);
        ans2 = max(ans2, tmpmax);
    }

    cout << ans1 << " " << ans2;
    cout << '\n';
    }

}