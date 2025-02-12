/*************************************************************************
	> File Name: 8.HZOJ_199.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Wed 12 Feb 2025 08:45:15 PM CST
 ************************************************************************/

// 记忆化
#include <iostream>
using namespace std;

int num[100005] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int a[11];

int f(int x) {
    return a[1] * num[x - 1] + a[2] * num[x - 2] +
           a[3] * num[x - 3] + a[4] * num[x - 4] +
           a[5] * num[x - 5] + a[6] * num[x - 6] +
           a[7] * num[x - 7] + a[8] * num[x - 8] +
           a[9] * num[x - 9] + a[10] * num[x - 10];   
}

int main() {
    int k, m;
    cin >> k >> m;
    for (int i = 1; i <= 10; i++) {
        cin >> a[i];
    }
    for (int i = 10; i <= k; i++) {
        num[i] = f(i) % m;
    }
    cout << num[k] << endl;
    return 0;
}

/* 超时
#include<stdio.h>

int f(int k, int *a) {
    if (k < 10) return k;
    return (a[1] * f(k - 1, a) + a[2] * f(k - 2, a) + a[3] * f(k - 3, a) + a[4] * f(k - 4, a) + a[5] * f(k - 5, a) + a[6] * f(k - 6, a) + a[7] * f(k - 7, a) + a[8] * f(k - 8, a) + a[9] * f(k - 9, a) + a[10] * f(k - 10, a));
}

int main() {
    int k, m;
    scanf("%d%d", &k, &m);
    int a[11] = {0};
    for (int i = 1; i <= 10; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", f(k, a) % m);
    return 0;
}
*/
