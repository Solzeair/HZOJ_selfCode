/*************************************************************************
	> File Name: 5.HZOJ_147.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 08 Feb 2025 02:49:08 PM CST
 ************************************************************************/

#include<stdio.h>
#include <string.h>
#define MAX 10000

int main() {
    char str[MAX + 5] = {0};
    scanf("%s", str);
    int len = strlen(str);
    int lastone = str[len - 1] - '0';
    printf("%s", (lastone % 2) ? "NO" : "YES");
    return  0;
}
