#include <iostream>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0; int curr_count = 0;

        for (int i : nums) {
            if (i==1)  {
                curr_count++;
                count = max(count, curr_count);
            }
            else curr_count = 0;
        }
        return count;
    }
};

// example
int main() {
    Solution sol;
    vector<int> nums = {1,1,0,1,1,1};
    cout << sol.findMaxConsecutiveOnes(nums) << endl; // output 3
    return 0;
}