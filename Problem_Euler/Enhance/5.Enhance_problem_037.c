/*************************************************************************
	> File Name: 5.Enhance_problem_037.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Fri 31 Jan 2025 05:13:43 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX 2000000

int prime[MAX + 5] = {0};
int is_prime[MAX + 5] = {1, 1, 0};

void init_prime() {
    for (int i = 2; i < MAX; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX) break;
            is_prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int is_val(int n) {
    //left
    int x = n, h = pow(10, floor(log10(n)));
    while (x) {
        if (is_prime[x]) return 0;
        x %= h;
        h /= 10;
    }
    //right
    int y = n;
    while (y) {
        if (is_prime[y]) return 0;
        y /= 10;
    }
    return 1;
}

int main() {
    init_prime();
    int sum = 0, flag = 11;
    for (int i = 5; i <= prime[0] && flag; i++) {
        if (!is_val(prime[i])) continue;
        sum += prime[i];
        flag--;
    }
    printf("%d, flag = %d\n", sum, flag);
    return 0;
}

