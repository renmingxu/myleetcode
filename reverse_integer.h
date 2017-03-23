//
// Created by renmingxu on 17-3-23.
//

#ifndef LEETCODE_REVERSE_INTEGER_H
#define LEETCODE_REVERSE_INTEGER_H
#include <iostream>
using namespace std;
class reverse_integer {
public:
    int reverse(int x) {
        const int min = -2147483648, max = 2147483647;
        int result = 0;
        int tmp;
        while(x != 0){
            tmp = x % 10;
            if ( (result > (max - tmp)/10 && tmp > 0) || (result < (min - tmp) / 10 && tmp < 0))
                return 0;
            result = result * 10 + tmp;
            x = x/10;
        }
        return result;
    }
};
#endif //LEETCODE_REVERSE_INTEGER_H
