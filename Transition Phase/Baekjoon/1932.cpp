#include <iostream>
using namespace std;
int dp[504][504];
int ready[504][504];
int arr[504][504];

int solve(int i , int j){

    if (i == 0 && j == 0) return arr[0][0];

    if (ready[i][j]) return dp[i][j];
    
    int result = 0;

    if (j == 0){ //가장 왼쪽에 있을때
        dp[i][j] = arr[i][j] + solve(i - 1, j); //arr[i][j] -> 선택된 수
    }else if (j == i){ //가장 오른쪽에 있을때
        dp[i][j] = arr[i][j] + solve(i - 1, j - 1);
    }else{ //그 외의 경우
        dp[i][j] = arr[i][j] + max(solve(i - 1, j - 1), solve(i - 1, j));
    }
    ready[i][j] = true; 
    
    return dp[i][j];

}


int main(){

    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cin >> arr[i][j];
        }
    }
    for (int j = 0; j < n; j++){
        sum = max(sum, solve(n, j));
    }

    cout << sum; 


}