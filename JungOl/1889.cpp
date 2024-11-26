#include <iostream>
#include <vector>
using namespace std;

int n;
int cnt = 0;

//행 기록
vector<int> col;

//대각선 충돌 확인 배열
vector<bool> diag1, diag2; 

int nqueen(int row){

    if (row == n){
        cnt ++; //모든 queen 배치하면 하나의 방법으로 간주 
        return 0;
    }

    for (int c = 0; c < n; c++){

        if (col[c] == -1 && !diag1[row - c + n - 1] && !diag2[row + c]){
            col[c] = row;
            diag1[row - c + n - 1] = true;
            diag2[row + c] = true;

            nqueen(row + 1);

            col[c] = -1;
            diag1[row - c + n - 1] = false;
            diag2[row + c] = false; 
        } 
    }

    return cnt;

}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    col = vector<int>(n, -1); //열정보 all -1
    diag1 = vector<bool>(2 * n - 1, false); //좌상단에서 우하단 대각선
    diag2 = vector<bool>(2 * n - 1, false); //죄하단에서 우상단 대각선

    cout  << nqueen(0) << '\n';
    return 0;



}