#include <iostream>
using namespace std;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long res = 0, cnt = 0;
        for (int num : nums) {
            if (num == 0) {
                cnt++;         
                res += cnt;     
            } else {
                cnt = 0;      
            }
        }
        return res;
    }
};

// example
int main() {
    Solution sol;
    vector<int> nums = {0,0,1,0,0,0};
    cout << sol.zeroFilledSubarray(nums) << endl; // output 9
    return 0;
}