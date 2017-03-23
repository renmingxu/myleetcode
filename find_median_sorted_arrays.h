//
// Created by renmingxu on 17-3-23.
//

#ifndef LEETCODE_FIND_MEDIAN_SORTED_ARRAYS_H
#define LEETCODE_FIND_MEDIAN_SORTED_ARRAYS_H
#include <vector>
#include <iostream>
using namespace std;
#include <vector>
#include <iostream>
using namespace std;
class find_median_sorted_arrays{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        vector<int>::iterator i1 = nums1.begin();
        vector<int>::iterator i2 = nums2.begin();
        for (int i = 0; i < nums1.size() + nums2.size(); ++i) {
            if (i1 == nums1.end()) {
                nums.push_back(*i2);
                i2++;
            } else if (i2 == nums2.end()){
                nums.push_back(*i1);
                i1++;
            } else if (*i1 < *i2) {
                nums.push_back(*i1);
                i1++;
            } else {
                nums.push_back(*i2);
                i2++;
            }
            for (int j = 0; j < nums.size(); ++j) {
                cout << nums[j] << " ";
            }
            cout << endl;
        }
        if (nums.size() % 2 == 0) {
            return (nums[nums.size() / 2] + nums[nums.size() / 2 - 1] )/ 2.0;
        } else {
            return nums[(nums.size() - 1)/ 2];
        }
    }
};
#endif //LEETCODE_FIND_MEDIAN_SORTED_ARRAYS_H
