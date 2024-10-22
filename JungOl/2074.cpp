#include <iostream>
using namespace std;

int main(){
    int n;
    
    cin >> n;
    int x = 1;
    int y = n / 2 + 1;
    int arr[100][100];
    int e = n * n;
    
    for (int i = 1; i <= e; i++){

        arr[x][y] = i;

        if (i % n == 0){
            x++;
        }else{
            x--;
            y--;
            if (x < 1) x = n;
            if (y < 1) y = n;
        }

    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            
            cout << arr[i][j] << " ";
            
        }
        cout << "\n";
    }

}