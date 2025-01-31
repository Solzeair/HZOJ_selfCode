/*************************************************************************
	> File Name: 7.base_problem_036.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Thu 30 Jan 2025 04:46:18 PM CST
 ************************************************************************/

#include<stdio.h>
#define MAXSIZE 1000000

int is_reverse(int n, int size) {
    int x = n, temp = 0;
    while (x) {
        //二进制用 >> 和 << 理解
        temp = temp * size + x % size;
        x /= size;
    }
    return temp == n;
}

int main() {
    int sum = 0;
    for (int i = 1; i < MAXSIZE; i++) {
        if (!is_reverse(i, 10) || !is_reverse(i, 2)) continue;
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
