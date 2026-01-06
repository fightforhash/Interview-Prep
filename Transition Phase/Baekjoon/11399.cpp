#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;

    vector<int> times(n);

    for (int i = 0; i < n; i++){
        cin >> times[i];
    }

    sort(times.begin(), times.end());

    queue<int> q;
    
    for (int t : times){
        q.push(t);
    }

    int totaltime = 0;
    int waitingtime = 0;

    while (!q.empty()){
        int curtime = q.front();
        q.pop();
        totaltime += waitingtime + curtime;
        waitingtime += curtime;
    }

    cout << totaltime;
    return 0; 

}