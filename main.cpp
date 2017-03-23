#include <iostream>
#include <vector>

#include "find_median_sorted_arrays.h"

using namespace std;

int main() {
    find_median_sorted_arrays s;
    vector<int> v1 = {11, 12};
    vector<int> v2 = {1,1,5,6,7,10,12};
    cout << s.findMedianSortedArrays(v1, v2) << endl;
    return 0;

}