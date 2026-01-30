#include <iostream>
using namespace std;

class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int cnt=0;int mask=1;
        for (int x:nums){
            cnt += ((x&mask)==0);
            if(cnt>=2)return true;
        }
        return false;
    }
};

//example
int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4,5};
    cout << sol.hasTrailingZeros(nums) << endl;
    return 0;
}