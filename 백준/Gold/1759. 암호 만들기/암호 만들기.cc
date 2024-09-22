#include <iostream>
#include <algorithm>
using namespace std;
int L;
int C;
char z[20];
bool check[20];
char vowel[] = "aeiou";

bool isvowel(char z){

    for (int i = 0; i < 5; i++){
        if (z == vowel[i]){
            return true;
            
        }
    }
    return false;
}




void bt(int k, int x){ //k = 암호로 선택된 원소들의 갯수 x = x <= i <= n에서 선택하면 된다는 정보를 담는 변수(check 할수 있는 구간의 첫번째 위치)
    
    if (k == L){ 

        // z에서 check된 원소들 중 모음이 1개 이상, 자음이 2개 이상 존재하는지 판별
        int vocount = 0;
        int concount = 0;

        for (int i = 0; i < C; i++){
            if (check[i]){
                if (isvowel(z[i])){
                    vocount++;
                }else{
                    concount++;
                }
            }

        }
        // 판별했을때, invalid한 password라면 return

        if (!(vocount >= 1 && concount >= 2)){
            return;

        }

        // return 이후에는, valid한 password 후보만이 남음 → 그대로 출력
        for (int i = 0; i < C; i++){
            if (check[i]){
                cout << z[i];
            }

        }
        cout << '\n';
    }

    for (int i = x; i < C; i++){
        if (!check[i]){
            check[i] = true;
            bt(k + 1, i + 1);
            check[i] = false;
        }
    }
    return;
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    cin >> L;
    cin >> C;

    for (int i = 0; i < C; i++){
        cin >> z[i];
        
    }
    sort(z, z + C);

    bt(0, 0);
    return 0;

}