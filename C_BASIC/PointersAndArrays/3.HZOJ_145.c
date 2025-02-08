/*************************************************************************
	> File Name: 3.HZOJ_145.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sat 08 Feb 2025 02:26:34 PM CST
 ************************************************************************/

#include<stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    // 初始变量赋值保证不出错
    int temp = 0, max = 0, cnt = 0;
    char ans[25][105] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%s", ans[i]);
        temp = strlen(ans[i]);
        if (temp <= max) continue;
        max = temp;
        cnt = i;
    }
    printf("%s\n", ans[cnt]);
    return 0;
}
