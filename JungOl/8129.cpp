#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> pc;
vector<string> s;
int n, k;
vector<vector<int>> combi;

void comb(int s, int d){

    if (d == k){
        combi.push_back(pc);
        return;        
    }

    for (int i = s; i <= n; i++){
        pc.push_back(i);
        comb(i + 1, d + 1);
        pc.pop_back();
    }    
}

int main(){
    cin >> n;
    
    cin >> k;

    comb(1, 0);

    sort(combi.begin(), combi.end());

    vector<int> target(k);

    for (int i = 0; i < k; i++){
        cin >> target[i];
    }
    
    auto idx = find(combi.begin(), combi.end(), target); //중요(아이디어 안떠올랐음 여기서)

    if (idx == combi.end()){
        cout << "None" << '\n';
    } else{
        cout << distance(combi.begin(), idx) + 1 << '\n';
    }

    return 0;
}