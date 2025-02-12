/*************************************************************************
	> File Name: 6.HZOJ_NO.239.cpp
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Thu 06 Feb 2025 08:50:14 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#define s(a) ((a) * (a))
using namespace std;

void f(long long n, long long s, long long &x, long long &y) {
    if (n == 1) {
        if (s == 1) x = 0, y = 0;
        else if (s == 2) x = 0, y = 1;
        else if (s == 3) x = 1, y = 1;
        else x = 1, y = 0;
        return ;
    }
    long long L = 1LL << (n - 1);
    long long block = L * L;
    long long xx, yy;
    if (s <= block) {
        f(n - 1, s, xx, yy);
        x = yy, y = xx;
    } else if (s <= 2 * block) {
        f(n - 1, s - block, xx, yy);
        x = xx, y = yy + L;
    } else if (s <= 3 * block) {
        f(n - 1, s - 2 * block, xx, yy);
        x = xx + L, y = yy + L;
    } else {
        f(n - 1, s - 3 * block, xx, yy);
        x = 2 * L - 1 - yy, y = L - 1 - xx;
    }
    return ;
}

int main() {
    long long t, n, s, d;
    scanf("%lld", &t);
    while (t--) {
        scanf("%lld%lld%lld", &n, &s, &d);
        long long sx, sy, dx, dy;
        f(n, s, sx, sy);
        f(n, d, dx, dy);
        printf("%.0lf\n", 10 * sqrt(s(sx - dx) + s(sy - dy)));
    }
    return 0;
}
