#include <iostream>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for (int i : nums) {
            if (to_string(i).size() % 2 == 0) res++;
        }
        return res;
    }
};
/*or 
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for (int i : nums) {
            if ((i >= 10 && i < 100) ||
                (i >= 1000 && i < 10000) ||
                (i >= 100000 && i < 1000000)) {
                res++;
            }
        }
        return res;
    }
};
*/

// example
int main() {
    Solution sol;
    vector<int> nums = {12,345,2,6,7896};
    cout << sol.findNumbers(nums) << endl; // output 2
    return 0;
}
