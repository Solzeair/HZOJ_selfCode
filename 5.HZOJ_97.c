/*************************************************************************
	> File Name: 5.HZOJ_97.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Fri 27 Sep 2024 12:03:31 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld", n * (n + 1ll) / 2);//1ll为类型转换，将int转换为longlong类型
    return 0;
}
