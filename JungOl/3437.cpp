#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int moveCounter(int n, string balls) {
    int rc = 0, bc = 0, ans = n;

    for (char ball : balls) {
        if (ball == 'R') rc++;
        else bc++;
    }
    ans = min(rc, bc); 

    int cnt = 0;
    for (int i = 0; i < n; i++) { //왼쪽부터 세주기
        if (balls[i] != balls[0]) break;
        cnt++;
    }
    if (balls[0] == 'R') ans = min(ans, rc - cnt);
    else ans = min(ans, bc - cnt);

    cnt = 0;
    for (int i = n - 1; i >= 0; i--) { //오른쪽부터 세주기
        if (balls[i] != balls[n - 1]) break;
        cnt++;
    }
    if (balls[n - 1] == 'R') ans = min(ans, rc - cnt);
    else ans = min(ans, bc - cnt);

    return ans;
}

int main() {
    int n;
    string balls;

    
    cin >> n >> balls;

    
    cout << moveCounter(n, balls);

    return 0;
}