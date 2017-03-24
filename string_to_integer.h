//
// Created by renmingxu on 17-3-24.
//

#ifndef LEETCODE_STRING_TO_INTEGER_H
#define LEETCODE_STRING_TO_INTEGER_H
#include <iostream>
#include <string>
using namespace std;
class string_to_integer {
public:
    int myAtoi(string str) {
        const int min = -2147483648, max = 2147483647;
        int result = 0;
        int c;
        int sign = 1;
        int tmp;
        const char * itr = str.data();
        while(isspace(*itr))
            itr++;
        c = (int)(unsigned char)*itr++;
        if (c == '-') {
            sign = -1;
            c = (int)(unsigned char)*itr++;
        } else if (c == '+') {
            c = (int) (unsigned char) *itr++;
        }
        while (isdigit(c)) {
            tmp = c - '0';
            if (result < 0 && result < (min + tmp) / 10) {
                return min;
            } else if (result > 0 && result > (max - tmp) / 10) {
                return max;
            }
            result = result * 10 + tmp * sign;
            c = (int) (unsigned char) *itr++;
        }
        return result;
    }
};

#endif //LEETCODE_STRING_TO_INTEGER_H
