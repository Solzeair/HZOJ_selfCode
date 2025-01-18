/*************************************************************************
	> File Name: 40.HZOJ_468.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Wed 16 Oct 2024 08:32:00 AM CST
 ************************************************************************/

#include<stdio.h>

//欧几里得算法
int gcd(int m, int n) {
    if (n == 0) return m;
    return gcd(n, m % n);
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d", gcd(m, n));
    return 0;
}
