#include <iostream>

using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0); 
    int a, b, n;
    cin >> a >> b >> n;

    int remain = a % b;
    
    for (int i = 0; i < n; i++) {
        
        remain *= 10;     
        int digit = remain / b; //소수점 한자리씩 뽑아냄
        remain %= b; //다음 소숫점 찾음 

        if (i == n - 1) {     
            cout << digit << '\n';
        }
    }

    return 0;        

}