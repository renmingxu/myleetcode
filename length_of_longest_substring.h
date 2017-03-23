//
// Created by renmingxu on 2017/3/22.
//

#ifndef LEETCODE_LENGTHOFLONGESTSUBSTRING_H
#define LEETCODE_LENGTHOFLONGESTSUBSTRING_H
#include <string>
using namespace std;
class length_of_longest_substring {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;
        for (int i = 0; i <= s.length(); ++i) {
            for (int j = 0; j <= s.length() - i; ++j) {
                if (j < result) {
                    continue;
                }
                string tmp = s.substr(i, j);
                bool t = true;
                for (int k = 0; k < tmp.length(); ++k) {
                    if (tmp.find(tmp[k]) != k) {
                        t = false;
                        break;
                    }
                }
                if (t) {
                    if (j > result) {
                        result = j;
                    }
                } else {
                    break;
                }
            }
        }
        return result;
    }
};


#endif //LEETCODE_LENGTHOFLONGESTSUBSTRING_H
