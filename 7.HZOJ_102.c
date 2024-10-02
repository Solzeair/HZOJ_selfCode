/*************************************************************************
	> File Name: 7.HZOJ_102.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Fri 27 Sep 2024 12:30:58 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    double a, b, c, t;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &t);
    printf("%.2lf", t + (1 - (1/a + 1/b) * t) / (1/a + 1/b - 1/c));//1/a为一小时a管能注多少水，1/b等同理
    return 0;
}
