#include <cmath>
#include <iostream>
using namespace std;

class Solution {
public:
    int mirrorDistance(int n) {
        int x = n;
        int rev = 0;

        while (x > 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10; 
        }

        return abs(n - rev);
    }
};


int main() {
    Solution sol;
    int n = 1234;
    int res = sol.mirrorDistance(n);
    cout << res << endl;
    return 0;
}

