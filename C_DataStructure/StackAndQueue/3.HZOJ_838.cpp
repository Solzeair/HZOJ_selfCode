/*************************************************************************
	> File Name: 3.HZOJ_838.cpp
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Mon 03 Mar 2025 09:31:32 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <queue>
using namespace std;

int min_num(int a, int b, int c) {
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    return a;
}

int func(queue<int> que1, queue<int> que2, queue<int> que3) {
    // 0x3f3f3f3f 是一个常见的填充数，经常用来表示“无穷大”
    int d = 0x3f3f3f3f;
    while (!que1.empty() && !que2.empty() && !que3.empty()) {
        int a = que1.front(), b = que2.front(), c = que3.front();
        int ans = abs(a - b) + abs(a - c) + abs(b - c);
        int temp = min_num(a, b, c);
        if (ans < d) d = ans;
        if (que1.front() == temp) que1.pop();
        else if (que2.front() == temp) que2.pop();
        else que3.pop();
    }
    return d;
}

int main() {
    int m, n, k, x;
    queue<int> que1, que2, que3;
    cin >> m >> n >> k;
    for (int i = 0; i < m; i++) {
        cin >> x;
        que1.push(x);
    }
    for (int i = 0; i < n; i++) {
        cin >> x;
        que2.push(x);
    }
    for (int i = 0; i < k; i++) {
        cin >> x;
        que3.push(x);
    }
    cout << func(que1, que2, que3) << endl;
    return 0;
}
