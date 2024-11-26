#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    int cnt = 0;
    int ans = 0;
    cin >> s;

    for (int i = 0; i < s.size(); i++){

        if (s[i] == '(' && s[i] == '('){ // 막대기 시작
            cnt++;
        }

        if (s[i] == '(' && s[i] == ')'){
            ans += cnt;
            i++;
        }

    }

    cout << ans;
    
}