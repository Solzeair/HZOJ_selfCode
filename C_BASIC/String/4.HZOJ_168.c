/*************************************************************************
	> File Name: 4.HZOJ_168.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Sun 09 Feb 2025 07:40:20 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void dict(char* a) {
    int i = 0;
    while (a[i]) {
        //先判断首字符
        if (islower(a[0])) {
            a[0] = toupper(a[0]);
        }
        i++;
        //判断首字符后面的
        if (isupper(a[i])) {
            a[i] = tolower(a[i]);
        }
    }
}
 
void swap(char* a, char* b) {
    char temp[100];
    strcpy(temp, a);
    strcpy(a,b);
    strcpy(b,temp);
}
 
int main() {
    char str[100][100];
    int n;
    scanf("%d", &n);
    //输入字符串
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
    // 规范化
    for (int i = 0; i < n; i++) {
        dict(str[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
        //strcmp函数按字典序比较两个字符串的大小，前者大于后者返回一个大于0的数。
            if (strcmp(str[i], str[j]) > 0) {
                swap(str[i], str[j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }
    return 0;
}

/* 该代码是正确的，评测器有问题
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// 定义一个字符串类型，最多 104 个字符 + '\0'
typedef char str[10005];
str ans[105] = {0};

void translate(char *s) {
    if (s[0] != '\0') s[0] = toupper(s[0]);
    for (int i = 1; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }
    return ;
}

int comp(const void *p, const void *q) {
    return strcmp((const char *)p, (const char *)q);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", ans[i]);
        translate(ans[i]);
    }
    qsort(ans, n, sizeof(str), comp);
    for (int i = 0, flag = 0; i < n; i++) {
        if (flag) putchar(10);
        flag += printf("%s", ans[i]);
    }
    return 0;
}
*/
