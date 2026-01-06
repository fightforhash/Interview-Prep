#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> check;
        
        for (int i = 0; i < nums.size(); i++){
            // check[2] = 0 
            // check[7] = 1
            // check[11] = 2
            if (check.count(target - nums[i])){
                int j = check[target - nums[i]];
                return {j, i};
            }
            // check[15] = 3
            check[nums[i]] = i;
        }

        return {};
    }
};

int main(){
    Solution solution;
    cin.tie(0) -> sync_with_stdio(0);

    vector<int> num = {3,2,4,6};
    int target = 6;

    vector<int> res = solution.twoSum(num, target);

    for (auto i: res){
        cout << i << '\n';
    }

}

