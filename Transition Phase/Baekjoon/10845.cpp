#include <iostream>
#include <queue>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;
    queue<int> q;


    while (n--){

        string s;
        cin >> s;
        if(s == "push"){
            int x;
            cin >> x;
            q.push(x);
        } else if (s == "pop"){
            if (!q.empty()){
                int x = q.front();
                q.pop();
                cout << x << '\n';
            }else{
                cout << -1 << '\n';
            }
        } else if (s == "size"){
            cout << q.size() << '\n';
        } else if (s == "empty"){
            if (q.empty()){
                cout << 1 << '\n';
            }else{
                cout << 0 << '\n';
            }
               
        } else if (s == "front"){
            if (!q.empty()){
                int x = q.front();
                cout << x << '\n';
            }else{
                cout << -1 << '\n';
            }
        }else if (s == "back"){
            if (!q.empty()){
                int x = q.back();
                cout << x << '\n';
            }else{
                cout << -1 << '\n';
            }
        }


    }


}