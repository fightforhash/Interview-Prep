#include <iostream>
using namespace std;
int n;
int arr[120][120];
int num = 1;
int main(){
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            
            if (num == n + 1){ //why n + 1 tho? (1 based index)
                num = 1;
            }
            arr[j][i] = num++;   

        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            
            cout << arr[i][j] << " ";

        }cout << '\n';
    }

}