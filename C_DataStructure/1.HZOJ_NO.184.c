/*************************************************************************
	> File Name: 1.HZOJ_NO.184.c
	> Author: 
	> Mail: 
	> Created Time: Sun 19 Jan 2025 05:31:50 PM CST
 ************************************************************************/

#include<stdio.h>

int func(int n) {
    if (n == 2) return 4;
    return (func(n - 1) + 1) * 2;
}

int main() {
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", func(n));
    return 0;
}
