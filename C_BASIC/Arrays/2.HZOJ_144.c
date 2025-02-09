/*************************************************************************
	> File Name: 2.HZOJ_144.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 08 Feb 2025 02:18:15 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int cnt = 0;
    char str[105] = {0};
    scanf("%s", str);
    for (int i = 0; str[i]; i++) {
        if (str[i] == 'A') cnt += 1;
    }
    printf("%d\n", cnt);
    return 0;
}
