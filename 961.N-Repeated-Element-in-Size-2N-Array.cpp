#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> map;

        for (int n : nums) {
            map[n]++;
            if (map[n] > 1) return n;
        }
        return 0;
    }
};

// example
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 3};
    int res = sol.repeatedNTimes(nums);
    cout << res << endl;
    return 0;
}