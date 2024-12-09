#include <iostream>
#include <vector>
#include <string>
using namespace std;

pair <int, int> countSB(string secret, string guess){ //민혁이 스트라이크, 볼개수 구해줌 
    int strike = 0, ball = 0;
    for (int i = 0; i < 3; i++){
        if (secret[i] == guess[i]){ //전체 조합과 민혁이의 세숫자 비교해서 따로 스트라이크 볼개수 구함
            strike++;
        } else if (guess.find(secret[i]) != string::npos){
            ball++;
        }
    }
    return {strike, ball};
}

int main(){
    int n;
    cin >> n;

    vector<string> questions(n);
    vector<int> strikes(n), balls(n);

    for (int i = 0; i < n; ++i) {
        cin >> questions[i] >> strikes[i] >> balls[i];
    }
    int poscount = 0;
    for (int num = 123; num <= 999; num++){ //나올수 있는 전체 수에서 조합 제작
        string c = to_string(num);

        if (c[0] == c[1] || c[1] == c[2] || c[0] == c[2] || c.find('0') != string::npos){ //0은 카드에서 허용안함
            continue;
        }

        bool isval = 1; 

        for (int i = 0; i < n; i++){
            auto [strike, ball] = countSB(c, questions[i]);
            if (strike != strikes[i] || ball != balls[i]){ //구한 스트라이크 볼개수랑 영수의 스트라이크 볼개수랑 일치하면 동일숫자로 판단
                isval = 0;
                break;
            }
        }
        if (isval){
            poscount++; //판단되면 카운터 올려줌
        }

    }

    cout << poscount;


}