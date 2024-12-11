#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i;
    int num = 1;

    int x =1, y = 0;
    int arr[120][120];
    
    int m = n;
    while(m > 0){

        for(i = 1; i<= m; i++){
            y++;
            arr[x][y] = num++;
        }
        m--;
        
        for (i = 1; i <=m; i++){
            x++;
            arr[x][y] = num++;
        }

        for(i = 1; i<= m; i++){
            y--;
            arr[x][y] = num++;
        }
        m--;
        for(i = 1; i<= m; i++){
            x--;
            arr[x][y] = num++;
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){

            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

}