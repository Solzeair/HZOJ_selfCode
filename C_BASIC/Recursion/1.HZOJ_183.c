/*************************************************************************
	> File Name: 1.HZOJ_183.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Wed 12 Feb 2025 07:05:21 PM CST
 ************************************************************************/

#include<stdio.h>

int func(int x) {
    if (x <= 0) return 0;
    else if (x == 1) return 1;
    else if (x > 1 && x % 2 == 0) return 3 * func(x / 2) - 1;
    else return 3 * func((x + 1) / 2) - 1;
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d", func(x));
    return 0;
}
