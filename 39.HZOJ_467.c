/*************************************************************************
	> File Name: 39.HZOJ_467.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Wed 16 Oct 2024 08:23:12 AM CST
 ************************************************************************/

#include<stdio.h>

long long func(long long n) {
    if (n == 1) return 1;
    return n * func(n - 1);
}

int main() {
    long long n;//易错点：递归函数int类型溢出
    scanf("%lld", &n);
    printf("%lld", func(n));
    return 0;
}
