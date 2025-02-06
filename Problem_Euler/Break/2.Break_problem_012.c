/*************************************************************************
	> File Name: 2.Enhance_problem_012.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Wed 05 Feb 2025 11:46:25 AM CST
 ************************************************************************/
#include <stdio.h>
#include <math.h>
#define MAX 100000

int prime[MAX + 5] = {0}; 
int f[MAX + 5] = {0};
int cnt[MAX + 5] = {0};

void init() {
    for (int i = 2; i <= MAX; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            f[i] = 2;
            cnt[i] = 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) {
                f[prime[j] * i] = f[i] / (cnt[i] + 1) * (cnt[i] + 2);
                cnt[prime[j] * i] = cnt[i] + 1;
                break;
            } else { 
                f[prime[j] * i] = f[prime[j]] * f[i];
                cnt[prime[j] * i] = 1;
            } 
        }
    }
    return ;
}

int main() {
    init();
    long long f_max = 0, n = 1;
    while (1) {
        if (n & 1) {
            f_max = f[n] * f[(n + 1) >> 1];
        } else {
            f_max = f[n / 2] * f[n + 1];
        }
        if (f_max > 500) break;
        n++;
    }
    printf("%lld\n", n * (n + 1) / 2);
    return 0;
}
/* 暴力枚举
#include <stdio.h>
#include <math.h>

long long triangle(int n) {
    return (1 + n) * n / 2;
}

int get_factor(long long m) {
    int cnt = 0, I = sqrt(m); 
    for (int i = 1; i < I; i++) {
        if  (m % i == 0) cnt += 2;
    }
    if (I * I == m) cnt--;
    return cnt;
}

int main() {
    int n = 7; 
    while (1) {
        n++;
        long long val = triangle(n);
        if (get_factor(val) <= 500) continue;
        printf("%lld\n", val); 
        break;
    }
    return 0;
}
*/
