#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        return __builtin_popcount(n);
    }
};

//example
int main() {
    Solution sol;
    int n = 11; // binary representation: 1011
    cout << sol.hammingWeight(n) << endl; // output 3
    return 0;
}