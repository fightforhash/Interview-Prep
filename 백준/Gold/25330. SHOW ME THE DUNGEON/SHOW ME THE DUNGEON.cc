#include <iostream>
#include <vector> 
using namespace std;

int N;
int K;
int A[22];
int P[22];
int res = 0;
bool check[22];

void bt(int h, int k, int d){ //h - 체력 d - 대미지 k - 구해낸 주민의 수
    
    res = max(res, k); //최대 주민의 수

    if (h < 0){ //체력이 아니면 parameter 하나가 더 안들어가면 안풀리는 문제, 모두 체력 베이스로 바꿔줌
        return; 
    }
    int rem = 0; //구해주고 나서 남은 주민의 수 더해주기
    for (int i = 0; i < N; i++){
        if (!check[i] && (d + A[i] <= h)){ //대미지 + 누적대미지가 체력보다 같거나 낮다면 d+A[i] = k 에서 바꿈
            rem += P[i];
        }
    }
    if (k + rem <= res){ //구해낸 주민의 수 + 남은 주민의 수가 결과보다 작같으면(커질 수가 없음) 리턴 암것도 안함
        return;
    }
     
    for (int i = 0; i < N; i++){
        if (!check[i] && (d + A[i] <= h)){ //대미지 + 누적대미지가 체력보다 같거나 낮다면
            check[i] = true;
            bt(h - (d + A[i]), k + P[i], d + A[i]); 
            check[i] = false;
        }
    }

}

int main(){

    cin >> N >> K;

    for (int i = 0; i < N; i++){ //입력 0인덱스로 받았으니 함수 0인덱스부터 시작
        cin >> A[i];
        
    }
    for (int i = 0; i < N; i++){
        cin >> P[i];
        
    }
    
    bt(K,0,0);
    cout << res; 
    return 0;



}