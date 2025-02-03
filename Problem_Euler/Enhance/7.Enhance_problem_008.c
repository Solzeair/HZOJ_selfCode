/*************************************************************************
	> File Name: 7.Enhance_problem_008.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Fri 31 Jan 2025 08:03:05 PM CST
 ************************************************************************/

#include <stdio.h>
// 宏名称不能包括点号
#include "7_Enhance_problem_008.h"

// 滚动数组
int main() {
    long long p = 1, zero = 0, ans = 0;
    for (int i = 0; num[i]; i++) {
        if (num[i] == '0') {
            zero += 1;
        } else {
            p *= (int)(num[i] - '0');
        }
        if (i < 13) continue;
        if ((num[i - 13] - '0') == 0) {
            zero -= 1;
        } else {
            p /= (int)(num[i - 13] - '0');
        }
        if (zero == 0 && p > ans) ans = p;
    }
    printf("%lld\n", ans);
    return 0;
}
