/*************************************************************************
	> File Name: 2.Enhance_problem_007_EX3.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Fri 31 Jan 2025 12:39:23 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAX 200000

int prime[MAX + 5] = {0};
void init_prime() {
    // i 是因数，prime[j] 是质数
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
    init_prime();
    printf("%d\n", prime[10001]);
    return 0;
}
