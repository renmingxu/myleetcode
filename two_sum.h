//
// Created by renmingxu on 2017/3/22.
//

#ifndef LEETCODE_TWO_SUM_H
#define LEETCODE_TWO_SUM_H
#include <vector>

using namespace std;

class two_sum {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result = vector<int>();
        auto end = nums.end();
        for (auto i = nums.begin(); i < end; ++i) {
            for(auto j = i + 1; j < end;++j) {
                if ( *i + *j == target) {
                    result.push_back(i - nums.begin());
                    result.push_back(j - nums.begin());
                    return result;
                }
            }
        }
        return result;
    }
};
#endif //LEETCODE_TWO_SUM_H
