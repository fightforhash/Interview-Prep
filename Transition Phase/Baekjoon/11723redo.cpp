#include <iostream>
#include <cstring>
using namespace std;
int n;
string s; 
int ans = 0;
int k; 
int main(){
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i <= n; i ++){

        cin >> s;

        if (s == "all"){
            ans = (2 << 20) - 1;
        }
        else if (s == "empty"){
            ans = 0;
        }
        else{
            cin >> k;
            k--; // 비트연산 위해 1베이스 인덱스 0베이스로 변환
        if (s == "add"){
            ans |= (1 << k); // 비트연산 위해서 수학적으로 풀면 x|2^k 지만 1로 변환해줌 remove 도 매한가지
        }
        else if (s == "remove"){
            ans &= ~(1 << k); //비트 초기화
        }
        else if(s == "check"){
            if (ans >> k & 1){
                cout << "1" << "\n";
            }else{
            cout << "0" << "\n";
            }
        }
        else if (s == "toggle"){
            ans ^= (1 << k);
        }
        }

    }

}