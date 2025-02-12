/*************************************************************************
	> File Name: 10.HZOJ_449.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Wed 12 Feb 2025 09:20:08 PM CST
 ************************************************************************/

#include<stdio.h>
int arr[25][25] = {{1}, {1, 1}};

void func(int n) {
    if (n == 1 || n == 2) return ;
    // 易错 递归函数的位置
    func(n - 1);
    arr[n - 1][0] = 1;
    arr[n - 1][n - 1] = 1;
    for (int i = 1; i < n - 1; i++) {
        arr[n - 1][i] = arr[n - 2][i - 1] + arr[n - 2][i];
    }
    return ;
}

int main() {
    int n;
    scanf("%d", &n);
    func(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j > 0) printf(" ");
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
