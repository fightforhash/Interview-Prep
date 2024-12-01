#include <iostream>
#include <string.h>
using namespace std;
const int a = 1e6;
int cnt = 0;
int ans = 0;

int main(){

    char s[a];
    cin >> s;
    
    for (int i = 0; i < strlen(s); i++){

        if (s[i] == '(' && s[i + 1] == '('){
            cnt++; 
        }
        if (s[i] == '(' && s[i + 1] == ')'){
            ans += cnt;
        }
        if (s[i] == ')' && s[i - 1] == ')'){
            ans += 1;
            cnt--;
        }
        
    }
    cout << ans;
}