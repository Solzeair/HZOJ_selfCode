/*************************************************************************
	> File Name: 1.HZOJ_181.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sun 09 Feb 2025 07:01:09 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[50] = {0};
    scanf("%s", str);
    for (int i = 0, I = strlen(str); i < I; i++) {
        // if (isupper(str[i])) str[i] += 32;
        // else str[i] -= 32;
        if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
        else str[i] -= 32;
    }
    printf("%s", str);
    return 0;
}

