#include <iostream>
#include <string>
using namespace std;

string arr[11] = {"champion", "tel", "pencil", "jungol", "olympiad", "class", "information", "lesson", "book", "lion"};

int main(){
    for (int i = 0; i < 2; i++){
    string s;
    bool found = false;
    
    if (i == 0){
    cout << "문자를 입력하세요. ";
    }
    if (i == 1){
        cout << "문자열을 입력하세요. ";
    }
    cin >> s;

    for (int j = 0; j < 10; j++){
        if (arr[j].find(s) != string::npos){
            cout << arr[j] << '\n';
            found = true;
        }
    }

    if (!found){
        cout << "찾는 단어가 없습니다." << '\n';
    }cout << '\n';
        
    }


}