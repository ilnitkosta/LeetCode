#include <iostream>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        return __builtin_popcount(x ^ y);
    }
};

//example
int main() {
    Solution sol;
    int x1 = 1; int y1 = 4;
    int x2 = 3; int y2 = 1;

    cout << sol.hammingDistance(x1, y1) << endl; //output 2
    cout << sol.hammingDistance(x2, y2) << endl; // output 1
    return 0;
}