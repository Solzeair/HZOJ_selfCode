/*************************************************************************
	> File Name: 4.HZOJ_95.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Thu 26 Sep 2024 11:58:59 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n / 10 + n % 10 * 10);
    //printf("%d%d", n % 10, n / 10);
    return 0;
}
