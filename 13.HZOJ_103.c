/*************************************************************************
	> File Name: 13.HZOJ_103.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Fri 04 Oct 2024 08:01:00 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a % b == 0) printf("YES");
    else printf("NO");
    //三目运算符
    //printf("%s", a % b == 0 ? "YES" : "NO");
    return 0;
}
