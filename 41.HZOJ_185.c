/*************************************************************************
	> File Name: 41.HZOJ_185.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Wed 16 Oct 2024 08:36:56 AM CST
 ************************************************************************/

#include<stdio.h>

int func(int n) {
    if (n == 1 || n == 2) return 1;
    return func(n - 1) + func(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", func(n));
    return 0;
}
