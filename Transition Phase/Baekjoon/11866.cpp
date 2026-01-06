#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> josephus(int n, int k){
    queue<int> q; 
    vector<int> res;

    for(int i = 1; i <= n; i++){
        q.push(i);
    }

    while(!q.empty()){
        for (int i = 0; i < k - 1; i++){
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        res.push_back(q.front());
        q.pop();
    }


    return res;
}



int main(){

    int n,k;
    cin >> n >> k;

    vector<int> result = josephus(n, k);

    cout << '<';
    for (int i = 0; i < result.size(); i++){
        cout << result[i];
        if (i != result.size() - 1){
            cout << ", ";
        }
    }

    cout << '>';
    return 0;

}