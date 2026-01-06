#include <iostream>
#include <string>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    string s;
    cin >> s;
    
    string ans;
    for (int i = 0; i < s.size(); ){
        
        if(i + 4 <= s.size() && s.substr(i, 4) == "XXXX"){
            ans += "AAAA";
            i += 4;
        }else if (i + 2 <= s.size() && s.substr(i,2) == "XX"){
            ans += "BB";
            i += 2;
        }else if (s[i] == '.'){
            ans += ".";
            i += 1;
        }else{
            cout << -1;
            return 0;
        }
    }

    cout << ans;
    
}