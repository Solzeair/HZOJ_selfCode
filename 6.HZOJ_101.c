/*************************************************************************
	> File Name: 6.HZOJ_101.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Fri 27 Sep 2024 12:11:28 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n/1000 + n%1000/100 + n%100/10 + n%10);
    return 0;
}
