/*************************************************************************
	> File Name: 21.HZOJ_130.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Tue 08 Oct 2024 08:11:25 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int m = 0, n = 0;
    double sum = 0;//为避免赋值时变量转换，建议将int改为double
    scanf("%d%d", &m, &n);
    for (int i = 0; i < n; i++) {
        sum = (m + sum) * 1.00417;
    }
    printf("$%.2lf", 1.0 * sum);
    return 0;
}
