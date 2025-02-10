/*************************************************************************
	> File Name: 5.HZOJ_170.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sun 09 Feb 2025 08:38:05 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int cmp(char *p) {
    char str[12] = "Ban_smoking";
    for (int i = 0; i < 11; i++) {
        if (*(p + i) != str[i]) return 0;
    }
    return 1;
}

int main() {
    int n;
    char s[100][2048] = {0}, buf[2048] = {0};
    char ns[11] = "No_smoking";
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%s", buf);
        char *p = buf;
        // is 作为 s 数组的索引，ib 作为 buff 的索引
        int is = 0, ib = 0;
        while (*(p + ib) != '\0') {
            if (*(p + ib) == 'B' && cmp((p + ib))) {
                int dif = 0;
                for (; dif < 10; ++dif) {
                    s[i][is + dif] = ns[dif];
                }
                // ib 跳过 "Ban_smoking" 末尾的g
                is += dif, ib = ib + dif + 1;
            } else {
                s[i][is] = *(p + ib);
                is++, ib++;
            }
        }
    }
    for (int i = 0; i < n; ++i) printf("%s\n", s[i]);
    return 0;
}

/* 答案正确，编译器不准使用
#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);
    char str[100][100] = {0};
    for (int i = 0; i < n; i++) scanf("%s", str[i]);
    for (int i = 0; i < n; i++) {
        char *a = NULL;
        char temp[100] = {0};
        while (a = strstr(str[i], "Ban_smoking")) {
            strcpy(temp, a + 11);
            strcpy(a, "No_smoking");
            strcat(str[i], temp);
        }
    }
    for (int i = 0; i < n; i++) printf("%s\n", str[i]);
    return 0;
}
*/
