#include <iostream>
using namespace std;

class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int tt = 0;
        for (int i : nums) {
            if ((i & 1) == 0) tt |= i;
        }
        return tt;
    }
};

//example
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    cout << sol.evenNumberBitwiseORs(nums) << endl; // output 6
    return 0;
}