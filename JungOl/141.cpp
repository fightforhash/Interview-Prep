#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for (int i = 1; i <= 100; i++){
        int ans = n * i;
        
        if (ans > 100){
            break;
        }

        cout << ans << " ";
        if (ans % 10 == 0){
            break;
        }
        

    }
}