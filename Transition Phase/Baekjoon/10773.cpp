#include <iostream>
#include <stack>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int k;
    cin >> k;
    stack<int> sta;
    for (int i = 0; i < k; i++){
        int num;
        cin >> num;

        if (num == 0){
            sta.pop();
        }else{
            sta.push(num);
        }
    }
    int res = 0;
    while (!sta.empty()){
        res += sta.top();
        sta.pop();
    }

    cout << res;
    return 0;

}