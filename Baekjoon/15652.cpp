#include <iostream>
using namespace std;
int n,m;
int arr[11];
int check[11];

void backtrack(int t){

    if (t == m){
        for (int i = 0; i < m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    int s = 1;
    if (t > 0){
        s = arr[t - 1]; // 2 1 3 1 3 2 같은 순서 방지(좌 > 우).. 
        //k 추가해서 풀려고 했는데 수학적 intuition 이 부족함에 따라 어쩔수 없이 조건문으로 풀었습니다.
    }

    for (int i = s; i <= n; i++){
        // 중복허용
        check[i] = true;
        arr[t] = i;
        backtrack(t + 1);
        check[i] = false;
        
    }

}

int main(){
    cin >> n >> m;

    backtrack(0);


}