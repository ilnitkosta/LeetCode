#include <iostream>
using namespace std;

class Solution {
public:
    string largestEven(string s) {
        while (!s.empty() && s.back() == '1') {
            s.pop_back();
        }

        return s;
    }
};


// example
int main() {
    Solution sol;
    string s = "121221";
    cout << sol.largestEven(s) << endl; // output: 12122
    return 0;
}