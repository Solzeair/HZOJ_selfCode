/*************************************************************************
	> File Name: 2.Enhance_problem_007.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Fri 31 Jan 2025 10:24:56 AM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAXSIZE 10001

int is_prime(int n) {
    // 避免判断条件时多次调用sqrt函数
    for (int i = 2, I = sqrt(n); i <= I; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int cnt = 0;
    for (int i = 2; ; i++) {
        if (!is_prime(i)) continue;
        cnt += 1;
        if (cnt == MAXSIZE) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}

/* 素数定理求上限
 * 小于或等于 x 的素数个数 π(x) 满足 π(x) ≈ x/lnx
 * 近似公式 p(n) ≈ n * (ln(n) + ln(ln(n)))
#include <stdio.h>
#include <math.h>

int main() {
    int n = 10000;
    double ln_n = log(n);
    double ln_ln_n = log(ln_n);
    double upper_bound = n * (ln_n + ln_ln_n);
    // ceil 函数 double ceil(double arg) 返回不小于 arg 的最小整数
    int upper = (int)ceil(upper_bound);

    printf("第10000个素数的上限约为: %d\n", upper);
    return 0;
}
*/
