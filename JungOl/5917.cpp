#include <iostream>
#include <stack>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    stack<int> ws;
    stack<int> cs;
    stack<int> ds;
    int n;
    int t;
    int j;
    int k;

    cin >> n >> t;
    for (int i = n; i >= 1; i--){
        ws.push(i);
    }
    for (int i = 1; i <= t; i++){
        cin >> j >> k;
        
        if (j == 1){
            for (int z = 1; z <= k; z++){
                int dish = ws.top();
                ws.pop();
                cs.push(dish);
            }
        }else if (j == 2){
            for (int z = 1; z <= k; z++){
                int dish = cs.top();
                cs.pop();
                ds.push(dish);
            }
        }
    }
    
    while (!ds.empty()){
        cout << ds.top() << '\n';
        ds.pop();
    }
    return 0;


}