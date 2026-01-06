
#include <iostream>
#include <stack>
using namespace std;


bool check(string s){
    
    stack<char> tack;
    for (int i = 0; i < s.size(); i++){

        if (s[i] == '('){
            tack.push(s[i]);
        }else{
            if (!tack.empty()){
                tack.pop();
            }else{
                return false;
            }
        }
    }

    if (!tack.empty()){
        return 0;
    }
    return 1;


}


int main(){
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        string st;
        cin >> st;

        if (check(st)){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
            
    }



}