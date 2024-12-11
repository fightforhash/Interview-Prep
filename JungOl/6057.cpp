#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int p, n;
    cin >> p >> n;

    vector<queue<int>> pizzas(p + 1);
    long long totalR = 0;

    for (int i = 1; i <= n; i++){
        int cmd, p, m = 0;
        cin >> cmd >> p;

        if (cmd == 0){
            cin >> m;
            pizzas[p].push(m);
        }else if (cmd == 1){
            if (!pizzas[p].empty()){
                totalR += pizzas[p].front();
                pizzas[p].pop();
            }
        }
    }

    cout << totalR << '\n';
    return 0;


}