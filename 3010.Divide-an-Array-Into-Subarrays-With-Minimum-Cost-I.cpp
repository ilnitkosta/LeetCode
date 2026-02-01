#include <iostream>
using namespace std;

class Solution {
public:
    int minimumCost(vector<int>& nums) {
        sort(nums.begin()+1,nums.end());
        return nums[0]+nums[1]+nums[2];
    }
};

//example
int main() {
    Solution sol;
    vector<int> nums = {1,3,5,2,4,6};
    cout << sol.minimumCost(nums) << endl; // output 6
    return 0;
}