/*************************************************************************
	> File Name: 4.HZOJ_146.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 08 Feb 2025 02:42:37 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char str[55] = {0};
    scanf("%s", str);
    for (int i = 0; str[i]; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y')) {
            str[i] += 1;
        } else if (str[i] == 'Z') str[i] = 'A';
        else if (str[i] == 'z') str[i] = 'a';
    }
    printf("%s", str);
    return 0;
}
