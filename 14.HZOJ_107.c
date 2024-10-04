/*************************************************************************
	> File Name: 14.HZOJ_107.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Fri 04 Oct 2024 08:19:29 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%s", n % 7 == 0 && n % 2 ? "YES" : "NO");
    return 0;
}
