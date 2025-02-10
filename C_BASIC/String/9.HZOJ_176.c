/*************************************************************************
	> File Name: 9.HZOJ_176.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 10 Feb 2025 03:40:33 PM CST
 ************************************************************************/

#include<stdio.h>
#include <string.h>

int main() {
    char b[1005], s[1005];
    // \0 在 scanf 扫描集中无效，stdin 流输入 \0, 其意义是输入'\''0'两个字符
    scanf("%[^\n\r] %[^\n\r]", b, s);
    /* fgets 函数用法，整行输入
    if (fgets(s, sizeof(s), stdin) != NULL) {
        // fgets 会把换行符也读进来，如果存在换行符，则将其替换为 '\0'
        size_t len = strlen(s);
        if (len > 0 && (s[len-1] == '\n' || s[len-1] == '\r')) {
            s[len-1] = '\0';
        }
    }
    */
    int sum = 0;
    char *buff;
    // 先进行一次，避免指针计算导致段错误
    buff = strstr(b, s);
    do {
        if (buff == NULL) break;
        sum += 1;
        // 易错 +1，转移到下一位，注意分号，do-while{};
    } while (buff = strstr(buff + 1, s));
    printf("%d", sum);
    return 0;
}

/* 一方法向后跳位，二方法改值
#include<stdio.h>
#include <string.h>
int main() {
    char nvdi[1001] = {0};
    char lufei[1001] = {0};
    scanf("%[^\n]", nvdi);
    getchar();
    scanf("%[^\n]", lufei);
    int cnt = 0;
    char *a;
    while (a = strstr(nvdi, lufei)) {
        cnt += 1;
        *a = lufei[0] + 1;
    }
    printf("%d\n", cnt);
    return 0;
}
*/
