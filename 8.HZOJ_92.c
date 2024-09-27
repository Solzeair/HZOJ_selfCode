/*************************************************************************
	> File Name: 8.HZOJ_92.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Fri 27 Sep 2024 08:40:45 PM CST
 ************************************************************************/

#include<stdio.h>

#define PAI 3.14

int main() {
    double r;
    scanf("%lf", &r);
    printf("%.2lf\n%.2lf", 2.0 * PAI * r, PAI * r * r);
    return 0;
}
