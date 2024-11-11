#include <iostream>
using namespace std;

int a[10];
bool check[10];
int n,m;

//References
// dfs 알고리즘 수도코드, 순열 가로, 세로 출력하기, s = a[t - 1] + 1 은 힌트를 얻어가며 도출


void dfs2(int t){

    if (t == m){
        for (int i = 0; i < m; i ++){
            cout << a[i] << ' ';
        }
        cout << '\n';
    }

    int s = 1;
    if (t > 0){
        s = a[t-1] + 1; 
        //t가 0 이상이면 a array 안에 있는 순열 숫자의 값 + 1 로 s를 정해줌으로써 루프 돌때 출력값 좌측 숫자가 우측 숫자가 커지는걸 방지.
        //lets assume t = 0 and we start from 1. n = 4, m = 2.
        //possible elements from a[0] = 1,2,3,4
        //lets say pick 1 for a[0] since s = 1. In t == 1 ,we pick a # that is larger than 1, so when a[0] + 1, the result
        //becomes 2 and the choices left are 2,3,4. If we pick 2, then it will form 1, 2 and returns result as expected.
    }
    for (int j = s; j <= n; j++){
        if (!check[j]){
            check[j] = true;
            a[t] = j;
            dfs2(t + 1);
            check[j] = false;
            
        }
        
    }

}

int main(){

    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;
    dfs2(0);
}