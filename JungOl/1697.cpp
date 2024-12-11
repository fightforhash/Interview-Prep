#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    char c;
    int m;
    queue<int> que;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> c;
        if(c == 'i'){
            cin >> m;
            que.push(m);
        }else if (c == 'o'){
            if (que.empty()){
                cout << "empty" << '\n';
            }else{
            cout << que.front() << '\n';
            que.pop();
            }
        }else if (c == 'c'){
            cout << que.size() << '\n';
        }
    }
    return 0;

}