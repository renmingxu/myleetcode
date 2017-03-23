#include <iostream>
#include <vector>
#include <ctime>
#include <sys/time.h>

#include "zigzag_conversion.h"

using namespace std;

int main() {
    struct timeval t_begin, t_end;
    double td_begin, td_end, td_spend;
    zizag_conversion s;
    string result;
    string str = "0123456789";
    gettimeofday(&t_begin,NULL);
    result  = s.convert(str, 1);
    gettimeofday(&t_end,NULL);
    td_begin = t_begin.tv_sec + t_begin.tv_usec / 1000000.0;
    td_end = t_end.tv_sec + t_end.tv_usec / 1000000.0;
    cout << "time:   " << td_end - td_begin <<  endl
         << "result: " << result << endl;
    return 0;

}