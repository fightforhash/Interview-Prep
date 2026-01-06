#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int paintWalls(vector<int>& cost, vector<int>& time) {
        
        return 1;
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    vector<int> C(n);
    for(auto &e:C)cin>>e;
    
    vector<int> T(n);
    for(auto &e:T)cin>>e;
    
    int answer = Solution{}.paintWalls(C, T);
    
    cout << answer;
    return 0;
}

// TC 1
// 4
// 1 2 3 2
// 1 2 3 2

// TC 2
// 4
// 2 3 4 2
// 1 1 1 1