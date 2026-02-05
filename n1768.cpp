#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int i = 0, j = 0;

        while (i < word1.size() || j < word2.size()) {
            if (i < word1.size()) {
                res += word1[i];
                i++;
            }
            if (j < word2.size()) {
                res += word2[j];
                j++;
            }
        }

        return res;
    }
};


int main() {
    Solution sol;
    string word1 = "abc";
    string word2 = "pqr";
    cout << sol.mergeAlternately(word1, word2) << endl; // output: 'apbqcr'
    return 0;
}