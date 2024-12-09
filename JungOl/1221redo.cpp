#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main(){

    int m;
    cin >> m;

    stack<int> s;
    string t;

    for (int i = 1; i <= m; i++){
        cin >> t;
        if (isdigit(t[0])){
            s.push(stoi(t));
        }else{

            int right = s.top(); s.pop();
            int left = s.top(); s.pop();

            if (t == "+"){
                s.push(left + right);
            }else if (t == "-"){
                s.push(left - right);
            }else if (t == "*"){
                s.push(left * right);
            }else if (t == "/"){
                s.push(left / right);
            }
        
    }
}

    cout << s.top();
}
