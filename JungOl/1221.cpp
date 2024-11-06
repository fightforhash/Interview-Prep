#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){

    int m;
    cin >> m;

    stack<int> s;
    string token;

    for (int i = 1; i <= m; i++){
        cin >> token;
        if (isdigit(token[0])){
            s.push(stoi(token));
        }else{

            int right = s.top(); s.pop();
            int left = s.top(); s.pop();

            if (token == "+"){
                s.push(left + right);
            }else if (token == "-"){
                s.push(left - right);
            }else if (token == "*"){
                s.push(left * right);
            }else if (token == "/"){
                s.push(left/right);
            }

        }
    }

    cout << s.top() << '\n';
    return 0;
}

