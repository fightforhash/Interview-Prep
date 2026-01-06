#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
void dfs(int arr[][200], int x, int y, int size, int &wc, int &bc){
    
    bool check = true;
    int first = arr[x][y];
    
    for (int i = x; i < x + size; i++){
        for (int j = y; j < y + size; j++){
            if (arr[i][j] != first){
                check = false;
                break;
            }
        }
        if (!check) break; 
    }

    if (check){
        if (first == 0) wc++;
        else bc++;
        return;
    }

    if (size > 1){
        dfs(arr, x, y, size / 2, wc, bc);
        dfs(arr, x, y + size / 2, size / 2, wc, bc);
        dfs(arr, x + size / 2, y, size /2 , wc, bc);
        dfs(arr, x + size / 2, y + size /2 , size / 2, wc, bc);
    }
    
}


int main(){
    
    cin >> n;
    int arr[200][200];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
          cin >> arr[i][j];
    }
    }
    int white = 0;
    int blue = 0;
    dfs(arr,1,1, n, white, blue);

    cout << white << '\n' << blue;
    return 0;
}