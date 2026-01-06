#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int countBall(int N, string balls){
    int rc = count(balls.begin(), balls.end(), 'R');
    int bc = count(balls.begin(), balls.end(), 'B');

    int ans = min(rc, bc);

    int cnt = 0; 

    for (int i = 0; i < N; i ++){
        if (balls[i] != balls[0]) break;
        cnt++;
    }
    if (balls[0] == 'R'){
        ans = min(ans, rc - cnt);
    }else{
        ans = min(ans, bc - cnt);
    }

    int revc = 0; 

    for (int i = N - 1; i >= 0; i--){
        if (balls[i] != balls[N - 1]) break;
        revc++;
    }
    if (balls[N - 1] == 'R'){
        ans = min(ans, rc - revc);
    }else{
        ans = min(ans, bc - revc);
    }

    return ans;

}

int main(){
    
    int n;
    cin >> n;
    string b;
    
    cin >> b;

    cout << countBall(n, b);


}