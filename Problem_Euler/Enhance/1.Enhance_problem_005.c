/*************************************************************************
	> File Name: 1.Enhance_problem_005.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Fri 31 Jan 2025 09:47:16 AM CST
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int lcm(int a, int b) {
    // 公式 a * b / gcd(a, b);
    return a / gcd(a, b) * b; // 避免出现溢出，必能整除
} 

int main() {
    long long ans = 1;
    // 无论有多少个数，他们的最小公倍数 = 最大公约数 * 他们各自的剩余因数之积
    for (int i = 2; i <= 20; i++) {
        ans = lcm(ans, i);
    }
    printf("%lld\n", ans);
    return 0;
}
