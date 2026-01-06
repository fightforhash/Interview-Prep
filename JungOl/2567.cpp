#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){

    int n, p;
    cin >> n >> p;

    
    set<int> bc;
    vector<int> kill;
    int cur = n;

    while (bc.find(cur) == bc.end()){
        bc.insert(cur);
        kill.push_back(cur);
        cur = (cur * n) % p;
    }

    int cycstart = 0;
    while(kill[cycstart] != cur){
        cycstart++;
    }

    cout << bc.size() - cycstart;
    
    
    return 0;



}