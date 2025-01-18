/*************************************************************************
	> File Name: 20.HZOJ_128.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Tue 08 Oct 2024 08:01:17 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, m;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        sum += m;
    }
    printf("%.2lf", 1.0 * sum / n);//加减乘除结合性从左往右 
    return 0;
}
