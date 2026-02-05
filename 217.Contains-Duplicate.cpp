#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        unordered_set<int> known;
        for (int num : nums) {
            if (known.find(num) != known.end()) {
                return true;
            }
            known.insert(num);
        }
        return false;
    }
};

// example usage
int main() {
    Solution solution;
    
    vector<int> nums1 = {1, 2, 3, 1};
    vector<int> nums2 = {1, 2, 3, 4};

    cout << "Contains duplicate in nums1: " << (solution.containsDuplicate(nums1) ? "Yes" : "No") << endl;
    cout << "Contains duplicate in nums2: " << (solution.containsDuplicate(nums2) ? "Yes" : "No") << endl;

    return 0;
}
