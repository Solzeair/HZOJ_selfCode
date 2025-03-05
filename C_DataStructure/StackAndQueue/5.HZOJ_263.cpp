/*************************************************************************
	> File Name: 5.HZOJ_263.cpp
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Tue 04 Mar 2025 03:44:32 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

bool isvalue(int a[], int n) {
    stack<int> s;
    int x = 0; 
    for (int i = 0; i < n; i++) {
        if (s.empty() || s.top() < a[i]) {
            while (x <= a[i]) s.push(x), x += 1;
        }
        if (s.empty() || s.top() != a[i]) return false;
        s.pop();
    }
    return true;
}

int main() {
    int n, a[25] = {0};
    cin >> n;
    int cnt = 20;
    for (int i = 0; i < n; i++) a[i] = i + 1;
    do {
        if (isvalue(a, n)) { 
            for (int i = 0; i < n; i++) cout << a[i];
            cout << endl;
            cnt--;
        }
    } while (next_permutation(a, a + n) && cnt);
    return 0;
}
