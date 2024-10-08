#include <iostream>
using namespace std;
int s;
int e;

int main(){
    while (true) {
        // 시작과 끝 범위 입력
        cin >> s >> e;
        int f = 0;
        // 입력값이 2에서 9 사이인지 확인
        if (s < 2 || s > 9 || e < 2 || e >9){
            cout << "INPUT ERROR!\n";
            continue;
        }

    if (s > e){
        for (int i = s; i >= e; i --){
            for (int j = 1; j <= 9; j++){
                printf("%d * %d = %2d   ", i, j, i*j);
                f++;

                if (f % 3 == 0){
                    cout << '\n';
                }
            }
            cout << '\n';
        }
    }else{
        for (int i = s; i <= e; i ++){
            for (int j = 1; j <= 9; j++){
                printf("%d * %d = %2d   ", i, j, i*j);
                f++;
                if (f % 3 == 0){
                    cout << '\n';
                }
            }
            cout << '\n';
        }
    }
    break;
    }
    return 0; 
    

}