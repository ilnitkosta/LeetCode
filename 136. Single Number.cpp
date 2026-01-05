#include <iostream>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;

        for (int i : nums) {
            map[i]++;
        }
        for (auto &n : map) {
            if (n.second == 1) return n.first;
        }

        return -1;
    }
};

// example 

int main() {
    Solution sol;
    vector<int> nums = {4,1,2,1,2};
    cout << sol.singleNumber(nums) << endl; // output: 4
    return 0;
}