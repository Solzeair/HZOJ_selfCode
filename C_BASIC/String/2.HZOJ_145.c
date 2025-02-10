/*************************************************************************
	> File Name: 2.HZOJ_145.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sun 09 Feb 2025 07:16:04 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    int n, max = 0, temp = 0;
    scanf("%d", &n);
    char str[105] = {0}, ans[105] = {0};
    while (n--) {
        scanf("%s", str);
        temp = strlen(str);
        if (temp > max) {
            max = temp;
            strcpy(ans, str);
        }
    }
    printf("%s", ans);
    return 0;
}

