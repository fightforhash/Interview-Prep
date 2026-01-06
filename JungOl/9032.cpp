#include <iostream>
using namespace std;

int main(){

    int score;
    cout << "점수를 입력하세요. ";
    cin >> score;
    if (score > 80){
        cout << "축하합니다. 합격입니다." << '\n';
    }else{
        cout << "죄송합니다. 불합격입니다." << '\n';
    }

}