/*************************************************************************
	> File Name: 7.HZOJ_167.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 10 Feb 2025 10:52:47 AM CST
 ************************************************************************/

#include<stdio.h>
#include <string.h>
#include <ctype.h>

char str[30000] = {0};
char str_insert[30000] = {0};
char str_add[30000] = {0};
char ans[30000] = {0};

int main() {
    int pos;
    scanf("%s", str);
    scanf("%d", &pos);
    scanf("%s", str_insert);
    int size = strlen(str);
    strncpy(ans, str, pos - 1);
    strcpy(str_add, str + pos - 1);
    strcat(ans, str_insert);
    strcat(ans, str_add);
    if (size > 100) printf("100\n");
    else printf("%d\n", size);
    printf("%s\n", ans);
    char *cnt = NULL;
    char *location = NULL;
    // 注意：必须先判断指针 cnt 是否为空，空指针不能参与运算，会引发段错误
    while (cnt = strchr(ans, 'x')) {
        location = cnt;
        ans[cnt - ans] = 'X';
    }
    size = strlen(ans);
    // 指针相减的结果为 long int，格式占位符为 %ld
    printf("%ld", &ans[size - 1] - location + 1);
    return 0;
}
