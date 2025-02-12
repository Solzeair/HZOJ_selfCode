/*************************************************************************
	> File Name: 9.HZOJ_200.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Wed 12 Feb 2025 09:04:27 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    double a[3] = {4, 7, 0};
    int n;
    double ans;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        a[(i + 2) % 3] = a[(i + 1) % 3] + a[(i) % 3];
        ans += a[(i) % 3] / a[(i + 1) % 3];
    }
    printf("%.0lf/%.0lf\n", a[(n - 1) % 3], a[(n) % 3]);
    printf("%.2lf", ans);
    return 0;
}
