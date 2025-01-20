/*************************************************************************
        > File Name: 2.HZOJ_NO.186.c
        > Author: 
        > Mail: 
        > Created Time: Mon 20 Jan 2025 05:06:39 PM CST
 ************************************************************************/

#include<stdio.h>

int func(int x, int y, int *s) {
    if (x > y) return 0;
    x += s[x - 1];
    return func(x, y, s) + 1;
}

int main() {
    int n = 0;
    int a[100005];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d\n", func(1, n, a));
    return 0;
}
