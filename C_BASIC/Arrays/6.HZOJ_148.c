/*************************************************************************
	> File Name: 6.HZOJ_148.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 08 Feb 2025 02:55:14 PM CST
 ************************************************************************/

#include<stdio.h>
#include <string.h>

int main() {
    char str[55];
    scanf("%s", str);
    int len = strlen(str);
    char temp = 0;
    // 注意 i < len / 2, 
    for (int i = 0, I = len - 1; i < len / 2; i++, I--) {
        temp = str[I];
        str[I] = str[i];
        str[i] = temp;
    }
    printf("%s", str);
    return 0;
}
