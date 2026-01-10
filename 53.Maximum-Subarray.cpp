#include <iostream>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // using kadane's algo
        int best_sum = INT_MIN; 
        int current_sum = 0;

        for (int x : nums) {
           current_sum = max(x, current_sum + x);
           best_sum = max(best_sum, current_sum);
        }

        return best_sum;
    }
};

// example 
int main() {
    Solution sol;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << sol.maxSubArray(nums) << endl; // output 9
    return 0;
}
