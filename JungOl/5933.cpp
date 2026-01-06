#include <iostream>
using namespace std;
int n;
int num = 0;
int arr[120][120];
int main(){
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            arr[i][j] = i * j;
        }
    }



    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << arr[i][j] << " ";
            
            
        }cout << "\n";
    }
}