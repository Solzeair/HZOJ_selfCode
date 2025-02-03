/*************************************************************************
	> File Name: 2.Enhance_problem_007_EX.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Fri 31 Jan 2025 11:15:26 AM CST
 ************************************************************************/

#include<stdio.h>
#define MAXSIZE 100

int prime[MAXSIZE + 5] = {0};

// 求最小质因子
void init_prime1() {
    for (int i = 2; i <= MAXSIZE; i++) {
        if (prime[i]) continue;
        prime[i] = i;
        for (int j = 2, J = MAXSIZE / i; j <= J; j++) {
            if (prime[i * j]) continue;
            prime[i * j] = i;
        }
    }
    return ;
}

// 求最大质因子
void init_prime2() {
    for (int i = 2; i <= MAXSIZE; i++) {
        if (prime[i]) continue;
        for (int j = 1, J = MAXSIZE / i; j <= J; j++) {
            prime[i * j] = i;
        }
    }
    return ;
}

int main() {
    //init_prime1();
    init_prime2();
    for (int i = 2; i <= MAXSIZE; i++) {
        printf("prime(%d) --> %d\n", i, prime[i]);
    }
    return 0;
}

/* 标准模板，求100以内的素数，素数筛算法
#include<stdio.h>
#define MAXSIZE 100

int prime[MAXSIZE + 5] = {0};

// 数组是全局变量，可以不传入参数，直接访问
void init_prime() {
    for (int i = 2; i <= MAXSIZE; i++) {
        if (prime[i]) continue;
        prime[++prime[0]] = i;
        for (int j = 2, J = MAXSIZE / i; j <= J; j++) {
            prime[i * j] = 1;
        }
    }
    return ;
}

int main() {
    init_prime();
    for (int i = 1; i <= prime[0]; i++) {
        printf("%d\n", prime[i]);
    }
    return 0;
}
*/
