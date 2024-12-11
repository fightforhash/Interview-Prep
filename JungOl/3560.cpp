#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;

string dc(int arr[][2000], int x, int y, int size){
    
    if (size == 1) {
        return arr[x][y] == 0 ? "0" : "1";
    }
    
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
        return first == 0 ?  "0" : "1";
    }
    
    string tl = dc(arr, x, y, size / 2);
    string tr = dc(arr, x, y + size / 2, size / 2);
    string bl = dc(arr, x + size / 2, y, size /2);
    string br = dc(arr, x + size / 2, y + size /2 , size / 2);
    
    return "X" + tl + tr + bl + br;
    
}


int main(){
    
    cin >> n;
    int arr[2000][2000];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
          cin >> arr[i][j];
    }
    }
    string res = dc(arr, 0, 0, n);

    cout << res;
    return 0;
}