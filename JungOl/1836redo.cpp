#include <iostream>
using namespace std;

int n, sum = 0, ans = 0;

int main(){
    
    cin >> n;

    for (int i = 1; i <= n; i++){
        int s;
        cin >> s;
        if (sum > 0) sum += s;
        else sum = s;
        if (ans < sum) ans = sum;
    }

    cout << ans;
    return 0;
}