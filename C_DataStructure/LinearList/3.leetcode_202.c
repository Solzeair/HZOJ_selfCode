/*************************************************************************
	> File Name: 3.leetcode_202.c
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Tue 25 Feb 2025 08:42:20 PM CST
 ************************************************************************/

int getNext(int x) {
    int y = 0, d;
    while (x) {
        d = x % 10;
        y += d * d;
        x /= 10;
    }
    return y;
}

bool isHappy(int n) {
    int p = n, q = n;
    while (q != 1) {
        p = getNext(p);
        q = getNext(getNext(q));
        if (p == q && p != 1) return false;
    }
    return true;
}
