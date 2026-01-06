#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){

    int P, N;
    cin >> P >> N;
    vector<queue<int>> qq(P + 1);
    int total = 0;
    
    for (int i = 0; i < N; i++){
        int cmd, p, m;
        
        cin >> cmd >> p;

        if(cmd == 0){
            cin >> m;
            qq[p].push(m);
        }else{
            if(!qq[p].empty()){
            total += qq[p].front();
            qq[p].pop();
            }
        }
    }

    cout << total;
    return 0;
}