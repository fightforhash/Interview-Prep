#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n; 
    queue<int> q;

    for (int i = 1; i <= n; i++){
        q.push(i);
    }

    while (q.size() > 1){
        int k = q.front();
        cout << k << ' ';
        q.pop();
        int p = q.front();
        q.push(p);
        q.pop();
    }

    cout << q.front();


}