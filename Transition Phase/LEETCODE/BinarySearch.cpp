#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int left = 0;
            int right = nums.size() - 1;

            while (left <= right){
                int mid = (left + right) >> 1;
                
                if (nums[mid] == target){
                    return mid;
                }
                if (nums[mid] < target){
                    left = mid + 1;
                }else{
                    right = mid - 1;
                }
                
            }
            return -1;
        }

    };


int main(){

    vector<int> nums = {-1, 0, 3, 5, 9 ,12};
    int target;

    cin >> target;

    Solution solution;

    cout << solution.search(nums, target);




}