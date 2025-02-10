/*************************************************************************
	> File Name: 10.HZOJ_174.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 10 Feb 2025 04:25:04 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX 1000000

int main() {
    char str[MAX + 5] = {0};
    // 最多读入MAX + 4的字符
    fgets(str, sizeof(str), stdin);
    char add[MAX + 5] = {0};
    char change[5] = "%20";
    char *buff;
    while (buff = strchr(str, ' ')) {
        // strcpy和strcat的区别，使用错误会造成严重问题
        strcpy(add, buff + 1);
        strcpy(buff, change);
        strcat(str, add);
    }
    printf("%s", str);
    return 0;
}

/* 简单做法
#include <stdio.h>

int main() {
    char str[1000001] = {0};
    scanf("%[^\n]", str);
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') {
            printf("%%20");
            continue;
        }
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
*/

