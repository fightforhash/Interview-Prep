#include <iostream>
using namespace std;

int main(){
    int num = 1;
    int n;
    int arr[101][101];
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            arr[i][j] = num++;
        }
    }

    for (int j = 1; j <= n; j++){
        for (int i = 1; i <= n; i++){
            cout << arr[i][j] << ' ';
    }cout << '\n';
    }
    


}