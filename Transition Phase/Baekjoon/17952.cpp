#include <iostream>
#include <stack>
using namespace std;

int main(){
    cin.tie(0) ->sync_with_stdio(0);
    int n;
    cin >> n;

    stack<pair<int, int>> stac;
    int ts = 0;

    for (int i = 1; i <= n; i++){
        
        int c, a,t;
        cin >> c;
        
        if (c == 1){
            cin >> a >> t;
            stac.push({a, t});
        }
        if (!stac.empty()){
            stac.top().second -= 1;
            if (stac.top().second == 0) {
                ts += stac.top().first;
                stac.pop();
            }
        }

    }

    cout << ts;


}