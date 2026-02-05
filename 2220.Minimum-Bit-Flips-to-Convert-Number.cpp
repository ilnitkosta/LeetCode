#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int minBitFlips(int start, int goal) {
        return __builtin_popcount(start ^ goal);
    }
};

//example
int main() {
    Solution sol;
    int start1 = 10; int goal1 = 7;
    int start2 = 3; int goal2 = 4;

    cout << sol.minBitFlips(start1, goal1) << endl; //output 3
    cout << sol.minBitFlips(start2, goal2) << endl; // output 3
    return 0;
}