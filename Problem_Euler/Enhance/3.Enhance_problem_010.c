/*************************************************************************
	> File Name: 3.Enhance_problem_010.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Fri 31 Jan 2025 03:42:29 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAX 2000000

int prime[MAX + 5] = {0};
void init_prime() {
    for (int i = 2; i <= MAX; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
    // 发现结果值接近10位时，改变int类型为longlong，验证是否溢出
    long long max = 0;
    init_prime();
    for (int i = 1; i <= prime[0]; i++) {
        max += prime[i];
    }
    printf("%lld\n", max);
    return 0;
}
