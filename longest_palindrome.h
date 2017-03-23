//
// Created by renmingxu on 17-3-23.
//

#ifndef LEETCODE_LONGEST_PALINDROME_H
#define LEETCODE_LONGEST_PALINDROME_H
#include <string>
using namespace std;
class  longest_palindrome{
public:
    string longestPalindrome(string s) {
        string result;
        string tmp;
        string::iterator begin;
        string::iterator end;
        bool flag;
        for (int i = 0; i <= s.length(); ++i) {
            for (int j = 0; j <= s.length() - i; ++j) {
                if (j < result.length() || s[i] != s[i + j - 1]) {
                    continue;
                }
                tmp = s.substr(i, j);
                flag = true;
                begin = s.begin() + i;
                end = s.begin() + i + j- 1;
                for (;end - begin >= 1;begin++, end--) {
                    if (*end != *begin) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    result = tmp;
                }
            }
        }
        return result;
    }
};
#endif //LEETCODE_LONGEST_PALINDROME_H
