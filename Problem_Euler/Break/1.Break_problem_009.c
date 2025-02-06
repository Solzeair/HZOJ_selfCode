/*************************************************************************
	> File Name: 1.Enhance_problem_009.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Wed 05 Feb 2025 10:31:41 AM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int gcd(int x, int y) {
    return (y ? gcd(y, x % y) : x);
}

int main() {
    int ans = 0;
    for (int m = 1; m < 33; m++) {
        for (int n = m + 1; n < 33; n++) {
            // n, m 一定为奇数
            if (gcd(n, m) != 1) continue;
            // 毕达哥拉斯三元组
            int a = 2 * m * n;
            int b = n * n - m * m;
            int c = n * n + m * m;
            if (1000 % (a + b + c) == 0) {
                int z = 1000 / (a + b + c);
                ans = a * b * c * (int)pow(z, 3);
            }
            if (ans) break;
        }
        if (ans) break;
    }
    printf("%d\n", ans);
    return 0;
}

/* 暴力枚举
#include<stdio.h>

int main() {
    for (int i = 1; i <= 334; i++) {
        for (int j = i; j <= 500; j++) {
            int z = 1000 - i - j;
            if (i * i + j * j != z * z) continue;
            printf("%d\n", i * j * z);
        }
    }
    return 0;
}
*/
