/*************************************************************************
	> File Name: 4.Enhance_problem_035.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Fri 31 Jan 2025 04:13:03 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX 1000000

int prime[MAX + 5] = {0};
// 避免误判 is_prime[1] 为素数
int is_prime[MAX + 5] = {1, 1, 0};
void init_prime() {
    for (int i = 2; i <= MAX; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX) break;
            is_prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int is_Xunprime(int n) {
    int digit = floor(log10(n)) + 1 ,temp = n;
    for (int i = 1; i < digit; i++) {
        temp = temp / 10 + temp % 10 * (int)pow(10, digit - 1);
        if (is_prime[temp]) return 0;
    }
    return 1;
}

int main() {
    init_prime();
    int cnt = 0;
    for (int i = 1; i <= prime[0]; i++) {
        if (is_Xunprime(prime[i])) cnt += 1;
    }
    printf("%d\n", cnt);
    return 0;
}
