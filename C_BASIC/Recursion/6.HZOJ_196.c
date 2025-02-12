/*************************************************************************
	> File Name: 6.HZOJ_196.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Wed 12 Feb 2025 07:26:31 PM CST
 ************************************************************************/

#include<stdio.h>

int func(int n) {
    if (n - 2 == 0 || n - 3 == 0) return 1;
    if (n - 2 < 0) return 0;
    return func(n - 2) + func(n - 3);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", func(n));
    return 0;
}
