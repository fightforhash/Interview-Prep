#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    int t[101][101];
    
    for (int i = 1; i <= n; i++)  // Initialize with -1 to mark unfilled spaces
        for (int j = 1; j <= n; j++)
            t[i][j] = -1;

    int num = 0;
    int x = 1, y = 1;
    int d = 0;

    for(int i = 1; i <= n * (n+1) / 2; i++){

        t[x][y] = num;
        num = (num + 1)%10;

        if (d == 0){
            if(x + 1 <= n && t[x+1][y] == -1){
                x++;
            }else{
                d = 2;
                y++;
            }
        } else if (d == 2){
            if(y + 1 <= n && t[x][y+1] == -1){
                y++;
            }else {
                d = 1;
                x--; y--;
            }
        } else if (d == 1){
            if (x - 1 >= 1 && y - 1 >= 1 && t[x-1][y-1] == -1){
                x--, y--;
            }else{
                d = 0;
                x++;
            }

        }
    }

    for (int i =1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout << t[i][j] <<  " ";
            }
            cout << '\n';
        }
    return 0;

}