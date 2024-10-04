#include <iostream>
#include <algorithm>
using namespace std;
int L;
int C;
const int size1 = 17;
char z[size1];
bool check[size1];
char s[6] = "aeiou";

bool checkvowel(char c){

    for (int i = 0; i < 5; i++){
        if (s[i] == c) return true; 
    }
    return false;
}

void dfs(int d, int k){

    if (d == L){
        int vocount = 0;
        int cocount = 0;
        for (int i = 0; i < C; i++){ //l and c usage
            if (check[i]){
                if (checkvowel(z[i])){
                    vocount++;
                }else{
                    cocount++;
                }
            }

        }
    
    if (!(vocount >= 1 && cocount >= 2)){
        return;
    }

    for (int i = 0; i < C; i++){ 
        if (check[i]){ //체크된 거만 출력 처음에 빠트림.
        cout << z[i];
        } 
    }
    cout << '\n';
    return;
    }

    for (int i = k; i < C; i++){
        if (!check[i]){
        check[i] = true;
        dfs(d + 1, i + 1); // k+1? i+1? i+1이여야만 다음 원소 체크 가능
        check[i] = false;
        }
    }
    
    return;

}


int main(){
    cin.tie(0) -> sync_with_stdio(0);
    cin >> L >> C;

    for (int i = 0; i <C; i++){
        cin >> z[i];
    }

    sort(z, z + C);
    dfs(0, 0);
    return 0;

}