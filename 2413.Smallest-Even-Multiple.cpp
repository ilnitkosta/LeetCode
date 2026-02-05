#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if ((n & 1) == 0) return n;
        else return n*2;
    }
};

//example
int main() {
    Solution sol;
    int test1 = 5; int test2 = 6;
    cout << sol.smallestEvenMultiple(test1) << endl; // output 10
    cout << sol.smallestEvenMultiple(test2) << endl; // output 6
    return 0;
}