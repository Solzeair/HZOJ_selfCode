/*************************************************************************
	> File Name: 5.HZOJ_NO.237.cpp
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Thu 06 Feb 2025 07:18:31 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int arr[10], s[10] = {0};

void print_one_result(int n) {
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << arr[i];
    }
    cout << endl;
    return ;
}

void f(int a, int b) {
    if (a == b) {
        print_one_result(b);
        return ;
    }
    for (int k = 1; k <= b; k++) {
        if (s[k]) continue;
        arr[a] = k;
        s[k] = 1;
        f(a + 1, b);
        s[k] = 0;
    }
    return ;
}

int main() {
    int n; 
    cin >> n;
    f(0, n);
    return 0;
}
