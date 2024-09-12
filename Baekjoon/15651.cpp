#include <iostream>
using namespace std;

int arr[9];
bool use[9];
int n, m;
void backtrack(int t){

    if (t == m){
        for (int i = 0; i < m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= n; i++){
        //이번에는 중복도 허용, 그러하니 if !(use[i]) 를 제거시키는 접근.
        // -> use[i]가 false 인 애들만 고르지 않음. 따라서 중복 제거를 안하게됨.
        use[i] = true;
        arr[t] = i;
        backtrack(t + 1);
        use[i] = false;
        
    }

}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;
    backtrack(0);

}