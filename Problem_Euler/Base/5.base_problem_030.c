/*************************************************************************
	> File Name: 5.base_problem_030.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Thu 30 Jan 2025 03:54:34 PM CST
 ************************************************************************/

//重难点：如何测定枚举的上限值
//画图，两函数，位数最大值：f(n) = 10^n - 1, 各位数相加最大值：g(n) = 9^5 * n
//两函数必有交点且为上限值

#include <stdio.h>
#include <math.h>
#define MAX 354294

int is_val(int n) {
    int x = n, temp = 0;
    while (x) {
        temp += (int)pow(x % 10, 5);
        x /= 10;
    }
    return temp == n;
}

int main() {
    int sum = 0;
    for (int i = 2; i <= MAX; i++) {
        if (!(is_val(i))) continue;
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}

/*
#include<stdio.h>

int main() {
    printf("%d\n", 9*9*9*9*9*6);
    return 0;
}
*/
