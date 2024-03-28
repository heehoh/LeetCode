
class Solution {
public:
    // 서브 문자열 길이를 구하는 함수를 만듦
    // 서브 문자열의 길이 리턴, end 값과 start 값을 초기화
    int subStrLen(string &s, int &start, int &end) {
        while (end < s.length()) {
            for (int i = start; i < end; ++i) {
                if (s[i] == s[end]) {
                    int tmp = start;
                    start = i + 1;
                    return end - tmp;
                }
            }
            ++end;
        }
        return end - start;
    }

    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        int start = 0;
        int end = 0;
        while (end < s.length()) {
            int len = subStrLen(s, start, end);
            if (longest < len)
                longest = len;
        }
        return longest;
    }
};
