#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int r, c;
    cin >> r >> c;
    vector<vector<int>> arr(r+1, vector<int>(c+1));
    
    int maxsum = -1e9;
    int row,col;
    for (int i = 1; i <= r; i++){
        for (int j = 1; j <= c; j++){
            cin >> arr[i][j];
        }
    }
    
    for (int i = 1; i <= r-2; i++){
        for (int j = 1; j <= c-2; j++){
            
            int sum = 0;
            for (int k = i; k <= i + 2; k++){ //*
                for (int l = j; l <= j + 2; l++){
                    sum += arr[k][l];
                }
            }
            
            if (maxsum < sum) {
                maxsum = sum;
                row = i;
                col = j;
            }
        }
    }
    
    cout << maxsum << '\n' << row << " " << col;
}