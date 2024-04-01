#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string buf;
        while (!ss.eof()) {
            ss >> buf;
        }
        return buf.length();
    }
};
