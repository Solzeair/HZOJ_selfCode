/*************************************************************************
	> File Name: 9.base_problem_003.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Fri 31 Jan 2025 09:09:31 AM CST
 ************************************************************************/

#include<stdio.h>
#define MAX 600851475143LL

int main() {
    long long ans = 0, i = 2, N = MAX;
    while (i * i <= N) {
        // ans一定是素数，while 循环除尽 i 的所有倍数因子
        if (N % i == 0) ans = i;
        while (N % i == 0) N /= i;
        i += 1;
    }
    // 当循环结束时，若 N > 1，说明 N 本身是一个质数且大于当前 i, 且未被处理
    if (N != 1) ans = N;
    printf("%lld\n", ans);
    return 0;
}
