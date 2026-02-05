#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 6 || num == 28 || num == 496 || num == 8128 || num == 33550336) return true;
        return false;
    }
};

int main() {
    Solution sol;
    // Example test cases
    int test1 = 28;
    int test2 = 12;
    int test3 = 586;
    
    bool res1 = sol.checkPerfectNumber(test1);
    bool res2 = sol.checkPerfectNumber(test2);
    bool res3 = sol.checkPerfectNumber(test3);
    
    cout << "Is " << test1 << " a perfect number? " << (res1 ? "Yes" : "No" ) << endl;
    cout << "Is " << test2 << " a perfect number? " << (res2 ? "Yes" : "No" ) << endl;
    cout << "Is " << test3 << " a perfect number? " << (res3 ? "Yes" : "No" ) << endl;

    return 0;
}