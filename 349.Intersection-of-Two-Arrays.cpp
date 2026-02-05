#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        vector<int> result;

        for (int num : set2) {
            if (set1.count(num)) {
                result.push_back(num);
            }
        }

        return result;
    }
};

//example 
int main() {
    Solution sol;
    vector<int> test_f1 = {1, 2, 2, 1};
    vector<int> test_f2 = {2, 2};
    vector<int> test_f3 = {4,9,5}, test_f4 = {9,4,9,8,4};
    vector<int> result1 = sol.intersection(test_f1, test_f2); // should return [2]
    vector<int> result2 = sol.intersection(test_f3, test_f4); // should return [9,4] or [4,9]
    for (int i : result1) {
        cout << i << " ";
    }
    cout << endl;
    for (int i : result2) {
        cout << i << " ";
    }

    return 0;
}
