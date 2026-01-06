#include <iostream>
using namespace std;
int n;
int ans[100];

bool valid(int i) {
    for (int len = 1; len <= i / 2; len++) {
        bool isSame = true;
        for (int j = 0; j < len; j++) {
            if (ans[i - j] != ans[i - j - len]) {
                isSame = false;
                break;
            }
        }
        if (isSame) return false; 
    }
    return true; 
}
    //"456 456"
    
void bt(int n, int i){

    if (i > n){
        cout << ans[i];
        return;
    }

    for (int j = 1; j <= 3; j++){
        ans[i] = j;
        if (valid(i)){
            bt(n, i + 1);     
        }
    }

    

    return;
}

int main(){

    
    cin >> n;    


}