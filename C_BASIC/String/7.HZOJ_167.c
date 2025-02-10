/*************************************************************************
	> File Name: 7.HZOJ_167.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 10 Feb 2025 10:52:47 AM CST
 ************************************************************************/

#include<stdio.h>
#include <string.h>

char str[30000] = {0};
char str_insert[30000] = {0};
char str_add[30000] = {0};
char ans[30000] = {0};

int main() {
    int pos;
    scanf("%s", str);
    scanf("%d", &pos);
    scanf("%s", str_insert);

    // 1
    int size = strlen(str);
    printf("%d\n", size);

    // 2
    char *cnt = strchr(str, 'a');
    printf("%ld\n", cnt - str + 1);

    // 3
    strncpy(ans, str, pos - 1);
    strcpy(str_add, str + pos - 1);
    strcat(ans, str_insert);
    strcat(ans, str_add);
    printf("%s", ans);
    return 0;
}
