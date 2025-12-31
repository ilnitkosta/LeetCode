#include <iostream>
using namespace std;

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + 2 * t;
    }
};

// example
int main() {
    Solution sol;
    cout << sol.theMaximumAchievableX(3, 2) << endl;//output  7
    cout << sol.theMaximumAchievableX(5, 6) << endl;//output  17
    return 0;
}



