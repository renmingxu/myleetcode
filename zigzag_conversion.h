//
// Created by renmingxu on 17-3-23.
//

#ifndef LEETCODE_ZIGZAG_CONVERSION_H
#define LEETCODE_ZIGZAG_CONVERSION_H
#include <string>
using namespace std;
class zizag_conversion {
public:
    string convert(string s, int numRows) {
        string results[numRows];
        int t;
        for (int i = 0; i < s.size(); ++i) {
            if (numRows > 1)
                t = i % ((numRows - 1) * 2);
            else
                t = 0;
            if (t < numRows) {
                results[t].push_back(s[i]);
            } else {
                results[(numRows - 1) * 2 - t].push_back(s[i]);
            }
        }
        string result;
        for (int i = 0; i < numRows; ++i) {
            result += results[i];
        }
        return result;
    }
};
#endif //LEETCODE_ZIGZAG_CONVERSION_H
