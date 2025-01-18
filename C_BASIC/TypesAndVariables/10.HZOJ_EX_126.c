/*************************************************************************
	> File Name: 10.HZOJ_126.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Fri 27 Sep 2024 08:53:54 PM CST
 ************************************************************************/

#include<stdio.h>

#define PAI 3.14

int main() {
    double r1, r2;
    scanf("%lf%lf", &r1, &r2);
    printf("%.2lf", PAI * (r1 * r1 - r2 * r2));
    return 0;
}
