#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void dc(int arr[200][200], int x, int y, int size, int &wc, int &bc){

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
        dc(arr, x, y, size / 2, wc, bc); //왼위
        dc(arr, x, y + size / 2, size / 2, wc, bc); //오위
        dc(arr, x + size / 2, y, size / 2, wc, bc); //왼아
        dc(arr, x + size / 2, y + size / 2, size / 2, wc, bc); //오아
    }
}

int main(){

    int n;
    cin >> n;
    int arr[200][200];
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j++){
               cin >> arr[i][j]; 
        }
    }
    int blue = 0; 
    int white = 0;

    dc(arr, 0,0, n, white,blue);

    cout << white << '\n' << blue << '\n';


}