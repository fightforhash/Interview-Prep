#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       map<int, bool> seen;
       for (int n: nums){
        if (seen.count(n)){
            return true;
        }
        seen[n] = true;
       }
       return false;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 3}; 

    bool result = solution.containsDuplicate(nums);

    if (result) {
        printf("The array contains duplicates.\n");
    } else {
        printf("The array does not contain duplicates.\n");
    }

    return 0;
}