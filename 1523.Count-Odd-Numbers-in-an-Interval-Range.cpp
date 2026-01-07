#include <iostream>
using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;

        for (int i = low; i <= high; i++) {
            if (i%2==1) count++;
        }
        return count;
    }
};

/* or using math
class Solution {
public:
    int countOdds(int low, int high) {
        return (high + 1) / 2 - low / 2;
    }
};
*/ 

//example
int main() {
    Solution sol;
    int low = 3, high = 7;
    cout << sol.countOdds(low, high) << endl; // output: 3
    return 0;
}