/*************************************************************************
	> File Name: 8.HZOJ_92.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Fri 27 Sep 2024 08:40:45 PM CST
 ************************************************************************/

#include<stdio.h>
//宏定义
#define PAI 3.14

int main() {
	//const float PI=3.14; 不用宏定义
    double r;
    scanf("%lf", &r);
    printf("%.2lf\n%.2lf", 2.0 * PAI * r, PAI * r * r);
    return 0;
}
