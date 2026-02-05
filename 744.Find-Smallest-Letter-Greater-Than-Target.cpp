#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target)return letters[i];
        }
        return letters[0];
    }
};

//example
int main() {
    Solution sol;
    vector<char> letters = {'c', 'f', 'j'};
    char target = 'a';
    cout << sol.nextGreatestLetter(letters, target) << endl; // output 'c'
    return 0;
}