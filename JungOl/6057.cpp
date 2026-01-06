#include <iostream>
#include <queue>
using namespace std;

int main(){
    
    int p, n, cmd;
    cin >> p;
    cin >> n;
    vector<queue<int>> ans(p + 1);
    
    int total = 0;
    
    for (int i = 0; i < n; i++){
        
        int P, M;
        cin >> cmd >> P;

        if (cmd == 0){
            cin >> M;
            ans[P].push(M);
        }else {
            if (!ans[P].empty()){
                total += ans[P].front();
                ans[P].pop();
            }
    }
    }

    cout << total;
}