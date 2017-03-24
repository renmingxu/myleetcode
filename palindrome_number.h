//
// Created by renmingxu on 2017/3/24.
//

#ifndef LEETCODE_PALINDROME_NUMBER_H
#define LEETCODE_PALINDROME_NUMBER_H

#include <iostream>

using namespace std;

class palindrome_number {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        int b;
        int t1, t2;
        for (b = 1;x / b >= 10;b *= 10);
        while (b > 0) {
            t1 = x % 10;
            t2 = x / b % 10;
            if (t1 != t2)
                return false;
            x /= 10;
            b /= 100;
        }
        return true;
    }
};
#endif //LEETCODE_PALINDROME_NUMBER_H
