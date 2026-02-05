#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int vowelConsonantScore(string s) {
        int v = 0, c = 0;
        for (char ch : s) {
            ch = tolower(ch);
            if (ch >= 'a' && ch <= 'z') {
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') v++;
                else c++;
            }
        }

        if (c == 0) return 0;
        return v / c;
    }
};

// example 
int main() {
    Solution sol;
    string test1 = "hello";
    string test2 = "shenzhen";
    cout << sol.vowelConsonantScore(test1) << endl; //output 0
    cout << sol.vowelConsonantScore(test2) << endl; //output 0
    return 0;
}