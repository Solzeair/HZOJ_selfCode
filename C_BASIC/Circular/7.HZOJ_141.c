/*************************************************************************
	> File Name: 26.HZOJ_141.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Wed 09 Oct 2024 06:55:12 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    char m = 'A';
    scanf("%d", &n);
    for (int i = 0; i < 2 * n + 1; i++) {
        int tmp = m + n - abs(i - n);//tmp临时变量，m+n为中间字母，减去隔行为每行首字母
        for (int j = 0; j < n - abs(i - n); j++) printf(" ");
        for (int j = 0; j < 1 + 2 * abs(i - n); j++) {
            printf("%c", tmp);
            if (j < abs(i - n)) tmp += 1;//注意不能用含tmp的表达式进行判断
            else tmp -= 1;
        } 
        if (i < 2 * n) printf("\n");
    }
    return 0;
}
