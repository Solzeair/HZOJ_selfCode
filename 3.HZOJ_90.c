/*************************************************************************
	> File Name: 3.hzoj_90.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Thu 26 Sep 2024 11:17:21 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n%d\n%d", a / 100, a % 100 / 10, a % 10);
    return 0;
}
