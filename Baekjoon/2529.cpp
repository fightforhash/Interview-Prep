#include <iostream>
using namespace std;
const int N = 11;
int n;
char k[N]; //allocation for characters
bool check[N];
string m, g;

bool checklarge(int i, int j, char k){

    if (k == '<'){
        return i < j;
    }else if (k == '>'){
        return i > j;
    }
    return true;
}

void intothevoid(int d, string s){

    if (d == n + 1){
        if (!m.size()){ //m이 비워져 있으면 여기에(최솟값)
            m = s;
        }
        else{ //최소
            g = s; // 아니면 g에 append(최댓값)
        }
    return;
    }  

    for (int i = 0; i < 10; i++){ // 0 - 9까지의 정수라고 해서 객체 -- 해줄 필요 없이 그냥 0인덱스로 설정(사실 인덱스를 수업에서 해주셧던 거처럼 뺴주면 되는데 뭘 뺴줘야 맞는 값이 나오는질 모르겠습니다.)
        
        if (!check[i]){
            
        if (d == 0 || checklarge(s[d - 1], i + '0', k[d - 1])){ //풀이 보고 참고한 부분, s의 마지막 element와 k의 마지막 element와 char 로 변경시킨 i의 값을 보고 어떤 값이 Large 한지 check하는 조건문
            
            check[i] = true;
            intothevoid(d + 1, s + to_string(i));
            check[i] = false;
        }
        }
      
}
}


int main(){

    cin >> n;

    for (int i = 0; i < n; i++){ //intothevoid 의 For loop 랑 starting index 맞춰서 0으로 설정.
        cin >> k[i];
    }
    intothevoid(0, "");

    
    cout << g << '\n';
    cout << m << '\n';
    return 0;

}