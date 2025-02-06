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

void printf_end_digit(int n) {
    for (int i = 0; i <= n; i++) {
        if (i) cout << ' ';
        cout << arr[i];
    }
    cout << endl;
    return ;
}

// for 函数扩宽，递归纵深，理解为横着的树
void f(int x, int y, int z) {
    if (y > z) return ;
    for (int k = y; k <= z; k++) {
        arr[x] = k;
        printf_end_digit(x);
        f(x + 1, k + 1, z);
    }
    return ;
}

int main() {
    int n = 0;
    cin >> n;
    f(0, 1, n);
    return 0;
}
