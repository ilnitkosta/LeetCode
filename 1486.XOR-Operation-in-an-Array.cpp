#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int total = 0;
        for (int i = 0; i < n; i++) {
            total ^= start + 2 * i;
        }
        return total;
    }
};

// example 
int main() {
    Solution sol;
    int n = 5, start = 0;
    int res = sol.xorOperation(n, start); // output 8
    cout << res << endl;
    return 0;
}