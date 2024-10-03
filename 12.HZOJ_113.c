/*************************************************************************
	> File Name: 12.HZOJ_113.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Wed 02 Oct 2024 10:19:37 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int y, m;
    scanf("%d%d", &y, &m);
    //(y % 4 == 0 && y % 100) || y % 400 == 0 为闰年计算方式
    if (y % 4 == 0 && y % 100 || y % 400 == 0) {
        //&&和||为从左到右结合方式，可以不用加括号
        if (__builtin_expect(!!(m == 2), 0)) printf("29");//分支预测
        //if (m == 2) printf("29");
        else if (m == 4 || m == 6 || m == 9 || m == 11) printf("30");
        else printf("31");
    }
    else {
        if (m == 2) printf("28");
        else if (m == 4 || m == 6 || m == 9 || m == 11) printf("30"); 
        else printf("31");
    }
    return 0;
}
