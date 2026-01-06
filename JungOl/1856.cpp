#include <iostream>
using namespace std;
int n;
int m;
int num = 1;
int arr[120][120];
int main(){

    cin >> n >> m;
    //역순출력 있기때문에 복잡해짐
    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            for (int j = m; j >= 1; j--){
                arr[i][j] = num++;
            }
        }else{
            for (int j = 1; j <= m; j++){
                arr[i][j] = num++;
                
            }
            
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}