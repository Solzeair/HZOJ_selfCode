/*************************************************************************
	> File Name: 5.Enhance_problem_015.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Thu 06 Feb 2025 11:55:50 AM CST
 ************************************************************************/

// 排列组合, 计算 C 20 40, 必定能够除尽
#include <stdio.h>

int main() {
    long long n = 40, m = 20, ans = 1;
    while (m > 1) {
        if (n > 20) ans *= (n--);
        if (ans % m == 0) ans /= (m--);
    }
    printf("%lld\n", ans);
    return 0;
}

