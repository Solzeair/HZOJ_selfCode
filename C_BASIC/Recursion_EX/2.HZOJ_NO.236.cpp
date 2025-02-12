/*************************************************************************
	> File Name: 3.HZOJ_NO.235.cpp
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Thu 06 Feb 2025 04:27:27 PM CST
 ************************************************************************/

#include <cstdio>
#include <iostream>
using namespace std;

int arr[10];

void func_printf(int n) {
    for (int i = 0; i < n; i++) {
        if (i) cout << ' ';
        cout << arr[i];
    }
    cout << endl;
    return ;
}

void f(int i, int j, int x, int y) {
    if (i == y) return ;
    for (int k = j; k <= x - y + 1 + i; k++) {
        arr[i] = k;
        // 枚举到最后一位才输出
        if (i == y - 1) func_printf(y);
        f(i + 1, k + 1, x, y);
    }
    return ;
}

int main() {
    int m = 0, n = 0;
    cin >> m >> n;
    f(0, 1, m, n);
    return 0;
}
