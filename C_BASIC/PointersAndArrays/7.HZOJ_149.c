/*************************************************************************
	> File Name: 7.HZOJ_149.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 08 Feb 2025 03:01:54 PM CST
 ************************************************************************/

#include<stdio.h>
#include <string.h>

int main() {
    char str[55] = {0};
    while (~scanf("%[a-zA-Z]", str)) getchar();
    printf("%lu", strlen(str));
    return 0;
}
