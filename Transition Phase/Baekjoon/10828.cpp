#include <iostream>
#include <stack>
using namespace std;

int main(){

    cin.tie(0) -> sync_with_stdio(0);

    int n;
    cin >> n;

    stack<int> st;

    while (n--){
        string com;
        cin >> com;
        
        if (com == "push"){
            int x;
            cin >> x;
            st.push(x);
        }else if (com == "pop"){
            if (!st.empty()){
                int x = st.top();
                st.pop();
                cout << x << '\n';
            }else{
                cout << -1 << '\n';
            }
        }else if (com == "size"){
            cout << st.size() << '\n';
        }else if (com == "empty"){
            if (st.empty()){
                cout << 1 << '\n';
            }else{
                cout << 0 << '\n';
            }
        }else if (com == "top"){
            if (!st.empty()){
                int x = st.top();
                cout << x << '\n';
            }else{
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}