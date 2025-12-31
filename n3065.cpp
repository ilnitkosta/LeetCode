#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int stps = 0;
        for (int i: nums) {
            if (i < k) stps++;
        }
        return stps;
    }
};

// example usage
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 4;

    int result = sol.minOperations(nums, k);
    
    cout << "Minimum operations: " << result << endl;
    
    return 0;
}
