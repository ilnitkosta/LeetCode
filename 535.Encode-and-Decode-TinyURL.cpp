#include <iostream>
using namespace std;

class Solution {
public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        return longUrl;
    }
    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return shortUrl;
    }
};

//example
int main() {
    Solution sol;
    string url = "https://example.com/some/long/url";
    string short_url = sol.encode(url);
    cout << "Encoded URL: " << short_url << endl;
    string orig_url = sol.decode(short_url);
    cout << "Decoded URl: " << orig_url << endl;
    return 0; 
}