#include <iostream>
#include <vector>
using namespace std;
int n;
int dp[205][10005];
bool ready[205][10005];

vector<int> nums;
int target;

bool solve(int i, int s){

    if (s == target) return true;

    if (i >= nums.size() ||  s > target) return false;

    if(ready[i][s]) return dp[i][s];
    ready[i][s] = true;

    bool pick = solve(i + 1, s + nums[i]);
    bool skip = solve(i + 1, s);

    dp[i][s] = pick || skip;
    return dp[i][s];

}

class Solution {
    
public:
    bool canPartition(vector<int>& inputNums) {
        
        nums = inputNums;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }

        if (sum % 2  !=  0) return false;
        target = sum / 2;

        for(int i = 0; i <= nums.size(); i++){
            for (int j = 0; j <= target; j++){
                dp[i][j] = 0;
                ready[i][j] = false;
            }
        }
         
        return solve(0, 0);
};
};
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    vector<int> C(n);
    for (int i = 0; i < n; i++) {
        cin >> C[i];
    }

    Solution sol;
    bool answer = sol.canPartition(C);

    if (answer) {
        cout << "true";
    } else {
        cout << "false";
    }
}


/*
TC 1
4
1 5 11 5

TC 2
4
1 2 3 5

*/