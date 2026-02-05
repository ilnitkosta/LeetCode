#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int u_len = 0, d_len = 0, l_len = 0, r_len = 0;

        for (char move : moves) {
            switch (move) {
                case 'U': u_len++;break;
                case 'D': d_len++;break;
                case 'L': l_len++;break;
                case 'R': r_len++;break;
            }
        }
        return u_len == d_len && l_len == r_len;
    }
};

// example
int main() {
    Solution sol;
    string test1 = "UDLR";
    string test2 = "UDUDLRLRLUD";
    cout << sol.judgeCircle(test1) << endl; // output 1 (true)
    cout << sol.judgeCircle(test2) << endl; // output 0 (false)
    return 0;
}