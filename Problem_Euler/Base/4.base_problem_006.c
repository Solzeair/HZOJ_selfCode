/*************************************************************************
	> File Name: 4.base_program_006.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Thu 30 Jan 2025 03:02:20 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAX 100

int main() {
    int sum1 = (1 + MAX) * MAX / 2;
    //前n项平方和的公式 n(n+1)(2n+1)/6
    int sum2 = MAX * (MAX + 1) * (2 * MAX + 1) / 6;
    printf("%d\n", sum1 * sum1 - sum2);
    return 0;
}

/*
#include <stdio.h>
#define MAX 100

int main() {
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= MAX; i++) {
        sum1 += i;
        sum2 += i * i;
    }
    printf("%d\n", sum1 * sum1 - sum2);
    return 0;
}
*/
