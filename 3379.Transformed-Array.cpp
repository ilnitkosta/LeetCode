#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> done(n);

        for(int i=0;i<n;i++) {
            int temp=((i+nums[i])%n+n)%n;
            done[i]=nums[temp];
        }
        return done;
    }
};

//example
int main() {
    Solution sol;
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    vector<int> result = sol.constructTransformedArray(nums);
    
    cout << "Transformed Array: ";
    for (int num : result) {
        cout << "[" << num << "] ";
    }
    cout << endl;
    
    return 0;
}