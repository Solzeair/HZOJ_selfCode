/*************************************************************************
	> File Name: 3.HZOJ_173.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sun 09 Feb 2025 07:24:24 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[10000] = {0};
    int cnt_alpha = 0, cnt_num = 0, cnt_kong = 0, cnt = 0;
    scanf("%[^\n]", str);
    for (int i = 0, I = strlen(str); i < I; i++) {
        if (isalpha(str[i])) cnt_alpha++;
        else if (isalnum(str[i])) cnt_num++;
        else if (str[i] == ' ') cnt_kong++;
        else cnt++;
    }
    printf("%d %d %d %d", cnt_alpha, cnt_num, cnt_kong, cnt);
    return 0;
}
