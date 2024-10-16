/*************************************************************************
	> File Name: 38.HZOJ_466.c
	> Author: Sakurarry
	> Mail: solzeair@163.com
	> Created Time: Tue 15 Oct 2024 10:49:28 PM CST
 ************************************************************************/

#include<stdio.h>

int func(int n) {
    //回文数个数
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        //判断回文数
        int x = i, y = 0;
        while (x) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        if (y == i) sum += 1;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", func(n));
    return 0;
}

/*明确代码结构，优化代码
#include<stdio.h>

int is_palindrome(int x) {
    int z = x, y = 0;
    while (x) {
        y = y * 10 + x % 10;
        x /= 10;
    }
    return y == z;
}

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        ans += is_palindrome(i);
    }
    printf("%d\n", ans);
    return 0;
}
*/
