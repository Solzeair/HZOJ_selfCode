/*************************************************************************
	> File Name: 6.HZOJ_169.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 10 Feb 2025 09:46:17 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n, sum = 0;
    scanf("%d" ,&n);
    getchar();
    char str1[100] = {0}, str2[100] = {0};
    int ans[100] = {0};
    // 当 %c %d 穿插读入时，容易出现错误
    for (int i = 0; i < n; i++) {
        // 在 %c 格式说明符前加空格，跳过所有前导空白字符，不用再写getchar
        // scanf(" %c%d", &str1[i], &ans[i]);
        scanf("%c%d", &str1[i], &ans[i]);
        getchar();
    }
    scanf("%s", str2);
    while (1) {
        char *cnt = NULL;
        int i = 0;
        for (i = 0; i < n; i++) {
            // 将查找到的字符的偏移量传给指针
            cnt = strchr(str2, str1[i]);
            // 未查找到相应字符
            if (cnt == NULL) continue;
            // 容易出错，注意下标和数组名称
            str2[cnt - str2] = tolower(str1[i]);
            sum += ans[i]; 
            // 退出循环，并从第一个对应字符开始查找
            break;
        }
        // 说明字符串str2中已经没有对应字符，退出循环
        if (cnt == NULL && i == n) break;
    }
    printf("%d", sum);
    return 0;
}
