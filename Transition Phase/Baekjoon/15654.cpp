#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int n1[11]; //새로운 입력이 나타났으므로 배열을 통해 받음
int a[11];
int check[11];
void bt(int t){
    
    if (t == m){
        for (int i = 0; i < m; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++){ //0으로 안바꾸면 둘째 줄 n개의 수중 가장 작은 수가 입력이 안되서 결과가 이상하게 나옴 
        if (!check[i]){
            a[t] = n1[i]; //n1안에 있는 애들로 순열 만드는거니까 i에서 n1[i]로 
            check[i] = true; //이건 a[i]의 check를 보는거니 i 인덱스로 고정
            bt(t + 1);
            check[i] = false;
        }
        }
    }

int main(){

    cin >> n >> m;

    for (int i = 0; i < n; i++){
        cin >> n1[i];
    }
    sort(n1, n1 + n); //없으면 내림차순으로 출력되서 sort가 이 풀이에선 꼭 필요
    bt(0);

}