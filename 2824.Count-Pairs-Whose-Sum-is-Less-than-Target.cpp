#include <iostream>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int cnt = 0;int l = 0;
        int r = nums.size() - 1;
        while(l<r){
            if ((nums[l]+nums[r])<target) {
                cnt+=(r-l);
                l++;
            } else r--;
        }
        return cnt;
    }
};

//example
int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4,5};
    int target = 8;
    cout << sol.countPairs(nums, target) << endl; // output 8
    return 0;
}