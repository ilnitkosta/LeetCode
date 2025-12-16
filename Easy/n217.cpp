#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> known;
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
    
    std::vector<int> nums1 = {1, 2, 3, 1};
    std::vector<int> nums2 = {1, 2, 3, 4};

    std::cout << "Contains duplicate in nums1: " << (solution.containsDuplicate(nums1) ? "Yes" : "No") << std::endl;
    std::cout << "Contains duplicate in nums2: " << (solution.containsDuplicate(nums2) ? "Yes" : "No") << std::endl;

    return 0;
}
