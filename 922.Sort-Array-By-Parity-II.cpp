#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even, odd;

        for (int i : nums) {
            if (i % 2 == 0)
                even.push_back(i);
            else
                odd.push_back(i);
        }

        vector<int> res(nums.size());

        int e = 0, o = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                res[i] = even[e];
                e++;
            } else {
                res[i] = odd[o];
                o++;
            }
        }

        return res;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {4, 2, 5, 7};

    vector<int> res = sol.sortArrayByParityII(nums); // output: [4,5,2,7]

    cout << "Sorted array by parity: ";

    for (int i : res) {
        cout << i << " ";
    }
};