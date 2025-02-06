/*************************************************************************
        > File Name: 2.HZOJ_NO.186.c
        > Author: 
        > Mail: 
        > Created Time: Mon 20 Jan 2025 05:06:39 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;

int f(int i, vector<int> &arr, int n) {
    if (i >= n) return 0;
    return f(i + arr[i], arr, n) + 1;
}

int main() {
    int n;
    vector<int> arr;
    cin >> n;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    cout << f(0, arr, n) << endl;
    return 0;
}

/*
#include<stdio.h>
#define MAX 100000

int func(int x, int y, int *s) {
    if (x > y) return 0;
    x += s[x];
    return func(x, y, s) + 1;
}

int main() {
    int n = 0;
    int a[MAX + 5] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d\n", func(1, n, a));
    return 0;
}
*/
