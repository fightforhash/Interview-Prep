#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    char c;
    int m;
    stack<int> stack;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> c;
        if(c == 'i'){
            cin >> m;
            stack.push(m);
        }else if (c == 'o'){
            if (stack.empty()){
                cout << "empty" << '\n';
            }else{
            cout << stack.top() << '\n';
            stack.pop();
            }
        }else if (c == 'c'){
            cout << stack.size() << '\n';
        }
    }
    return 0;

}