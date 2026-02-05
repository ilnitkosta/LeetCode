#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maximum=0;
        int left = 0;int right = nums.size() - 1;

        while (left<right){
            maximum = max(nums[left] + nums[right], maximum);
            left +=1;
            right-=1;
        }
        return maximum;
    }
};

//example
int main() {
    Solution sol;
    vector<int> nums = {3,5,2,3};
    cout << sol.minPairSum(nums) << endl; // output 7
    return 0;
}