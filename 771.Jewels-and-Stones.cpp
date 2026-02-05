#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (char j : jewels) {
            for (char s : stones) {
                if (j == s) {
                    count++;
                }
            }
        }
        return count;
    }
};


int main() {
    Solution sol;
    string jewels = "aA";
    string stones = "aAAbbbb";
    int result = sol.numJewelsInStones(jewels, stones);
    cout << "number of jewels in stones: " << result << endl;
    return 0;
}