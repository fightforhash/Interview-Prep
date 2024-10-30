#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int res = 0;
    

    while(true){
        cin >> s;
        if (s == "0") break;
        
        res = 0;
        for (char ch: s){
            res += ch - '0';
        }
        bool leading = true;
        for (int i = s.size() - 1; i >= 0; i--){
            if (leading && s[i] == '0'){
                continue;
            }
            leading = false;
            cout << s[i];
        }
        

        cout << " " << res << '\n';

    } 

    return 0;

}