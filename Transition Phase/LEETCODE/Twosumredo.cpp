#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            map<int, int> store;

            for (int i = 0; i < nums.size(); i++){
                if (store.count(target - nums[i])){
                    int j = store[target - nums[i]];
                    return {j , i};
                }
                store[nums[i]] = i;
            }
            return {};
        }
    };

int main(){

    Solution solution;
    //vector<int> numbers = {2, 7, 11,15};
    //int target = 9; 
    vector<int> numbers2 = {3,2,4};
    int target2 = 6; 
    vector<int> numbers3 = {3,3};
    int target3 = 6; 

    //vector<int> res = solution.twoSum(numbers, target);
    vector<int> res = solution.twoSum(numbers2, target2);
    //vector<int> res = solution.twoSum(numbers3, target3);

    for (auto d : res){
        cout << d << " ";
    }

}