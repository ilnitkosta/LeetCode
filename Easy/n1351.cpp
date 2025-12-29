#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int res = 0;
        for (auto &row : grid) {
            for (int i : row) {
                if (i < 0) res++;
            }
        }
        return res;
    }
};


int main() {
    Solution sol;
    vector<vector<int>> grid = {
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3}
    };

    int res = sol.countNegatives(grid);

    cout << "Number of negative numbers: " << res << endl;
    return 0;
}