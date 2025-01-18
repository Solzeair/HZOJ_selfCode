/*************************************************************************
	> File Name: 15.HZOJ_108.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Fri 04 Oct 2024 08:29:38 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char a;
    double m, n;
    scanf("%c", &a);
    scanf("%lf%lf", &m, &n);
    if (a == 'r') printf("%.2lf", m * n);
    else printf("%.2lf", 0.5 * m * n);
    return 0;
}
