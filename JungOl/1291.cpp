#include <iostream>
#include <iomanip>
using namespace std;
int s;
int e;

int main(){

    while (true) {
        // 시작과 끝 범위 입력
        cin >> s >> e;

        // 입력값이 2에서 9 사이인지 확인
        if (s >= 2 && s <= 9 && e >= 2 && e <= 9) {
            break;  // 유효한 입력이면 반복 종료
        } else {
            cout << "INPUT ERROR!" << '\n';  // 유효하지 않은 입력이면 에러 출력 후 다시 입력받음
        }
    }

    
        for (int i = 1; i <= 9; i++){

            if(s > e){ //core logic 
                for (int j = s; j >= e; j--){

                    printf("%d * %d = %2d   ", j, i, j*i);
                    
                }cout << '\n';

            }else{
                for (int j = s; j <= e; j++){

                    printf("%d * %d = %2d   ", j, i, j*i);
                    
                }cout <<'\n';
            }
        }

    

    return 0; 
    

}