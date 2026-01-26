#include <iostream>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int i : nums) {
            ans ^= i;
        }
        return ans;
    }
};

// example 
int main() {
    Solution sol;
    vector<int> nums = {4,1,2,1,2};
    cout << sol.singleNumber(nums) << endl; // output: 4
    return 0;
}