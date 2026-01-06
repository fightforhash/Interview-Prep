#include <iostream>
#include <stack>
using namespace std;

bool check(string str){
    stack<char> tack;
    //stack<char> tack2;
    //int len = str.length();
    
    /*
    for (int i = 0; i < len; i++){
        if (str[i] == '(')
            tack.push(str[i]);
        if (str[i] == '['){
            tack2.push(str[i]);
        }else if (str[i] == ')'){
            if (!tack.empty()) tack.pop();
            
        }else if (str[i] == ']'){
            if (!tack2.empty()) tack2.pop();
            
        } 
    }

    if (tack.empty() && tack2.empty()){
        return 1;
    }   
    */
   //짝을 이루는 두 괄호가 있을 때, 그 사이에 있는 문자열도 균형이 잡혀야 한다. 위 로직은 이걸 만족 X
    for(char c: str){
        if (c == '(' || c == '['){
            tack.push(c);
        }else if (c == ')'){
            if (tack.empty() || tack.top() != '('){
                return false;
            }
            tack.pop();
        }else if (c == ']'){
            if (tack.empty() || tack.top() != '['){
                return false;
            }
            tack.pop();
        }
    }
    return tack.empty();
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    string s;
    while(true){
        getline(cin, s);
        if (s == "."){
            break;
        }
        
        if (check(s)){
            cout<< "yes\n";
        }else{
            cout << "no\n";
        }
    }
} 